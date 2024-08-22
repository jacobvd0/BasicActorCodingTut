// Fill out your copyright notice in the Description page of Project Settings.


#include "TUTGamemodeBase.h"
#include "Kismet/GameplayStatics.h"
#include "TUTGameSaveGame.h"
#include "TUTGameCharacter.h"
#include "Engine.h"
#include "GameSaveTransform.h"

ATUTGamemodeBase::ATUTGamemodeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATUTGamemodeBase::AddScore(int scoreToAdd)
{
	GEngine->AddOnScreenDebugMessage(1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%i (+%i)"), Score + scoreToAdd, scoreToAdd));

	Score += scoreToAdd;
}

FVector ATUTGamemodeBase::GetLastSavedPlayerLocation()
{
	return LastPlayerLocation;
}

FString ATUTGamemodeBase::CreateSaveFilePath(const FString& saveName)
{
	return FPaths::ProjectSavedDir() + "SaveJson/" + saveName + TEXT(".json.sav");
}

bool ATUTGamemodeBase::SaveGameToJSONFile(const FString& saveName)
{
	FString saveGamePath = CreateSaveFilePath(saveName);

	TSharedPtr<FJsonObject> saveJson = MakeShareable(new FJsonObject());

	// Saves the player's score
	saveJson->SetNumberField(TEXT("Score"), Score);

	// Gets the players location then saves it
	for (TActorIterator<ATUTGameCharacter> player(GetWorld()); player; ++player) {
		if (IsValid(*player)) {
			saveJson->SetStringField(TEXT("LastPlayerLocation"), player->GetActorLocation().ToString());
			break;
		}
	}
	

	TArray<TSharedPtr<FJsonValue>> jsonTransformValues;
	TMap<FString, FTransform> SaveTransformsByName;
	
	for (TObjectIterator<UGameSaveTransform> savedTransforms; savedTransforms; ++savedTransforms) {
		if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }

		AActor* saveOwner = savedTransforms->GetOwner();
		EWorldType::Type ownerWorldType = saveOwner->GetWorld()->WorldType;

		if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) { continue; }

		FString ownerName = saveOwner->GetName();
		FTransform newSaveTransform;
		savedTransforms->SaveTransform(newSaveTransform);

		SaveTransformsByName.FindOrAdd(saveOwner->GetName(), newSaveTransform);
	}

	for (auto& transformPair : SaveTransformsByName) {
		TSharedPtr<FJsonObject> saveTransform = MakeShareable(new FJsonObject());

		saveTransform->SetStringField(TEXT("Name"), transformPair.Key);
		saveTransform->SetStringField(TEXT("Transform"), transformPair.Value.ToString());

		jsonTransformValues.Add(MakeShareable(new FJsonValueObject(saveTransform)));
	}
	saveJson->SetArrayField(TEXT("SaveTransformsByName"), jsonTransformValues);

	FString contents;
	TSharedRef<TJsonWriter<>> saveWriter = TJsonWriterFactory<>::Create(&contents);
	FJsonSerializer::Serialize(saveJson.ToSharedRef(), saveWriter);
	
	bool result = FFileHelper::SaveStringToFile(contents, *saveGamePath);
	return result;
}

bool ATUTGamemodeBase::SaveGame(const FString& saveName)
{
	USaveGame* newPlrSave = UGameplayStatics::CreateSaveGameObject(UTUTGameSaveGame::StaticClass());
	UTUTGameSaveGame* plrSave = Cast<UTUTGameSaveGame>(newPlrSave);


	if (IsValid(plrSave)) {
		plrSave->Score = Score;
		UGameplayStatics::SaveGameToSlot(plrSave, saveName, 0);
	}
	else { return false; }


	USaveGame* newSave = UGameplayStatics::CreateSaveGameObject(UTUTGameSaveGame::StaticClass());
	UTUTGameSaveGame* worldSave = Cast<UTUTGameSaveGame>(newSave);

	if (IsValid(worldSave)) {

		for (TActorIterator<ATUTGameCharacter> player(GetWorld()); player; ++player) {
			if (IsValid(*player)) {
				worldSave->LastPlayerLocation = player->GetActorLocation();
				break;
			}
		}


		for (TObjectIterator<UGameSaveTransform> savedTransforms; savedTransforms; ++savedTransforms) {
			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }

			AActor* saveOwner = savedTransforms->GetOwner();
			EWorldType::Type ownerWorldType = saveOwner->GetWorld()->WorldType;

			if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) { continue; }

			FString ownerName = saveOwner->GetName();
			FTransform newSaveTransform;
			savedTransforms->SaveTransform(newSaveTransform);

			worldSave->SaveTransformsByName.FindOrAdd(saveOwner->GetName(), newSaveTransform);
		}
		
		UGameplayStatics::SaveGameToSlot(worldSave, saveName + TEXT("-" + GetWorld()->GetName()), 0);
		return true;
	}
	else return false;

	//return true;
}

bool ATUTGamemodeBase::LoadGameFromJSONFile(const FString& saveName)
{
	FString saveGamePath = CreateSaveFilePath(saveName);

	FString contents;
	bool loadSuccess = FFileHelper::LoadFileToString(contents, *saveGamePath);
	
	if (!loadSuccess) return false;

	TSharedPtr<FJsonObject> saveJson = MakeShareable(new FJsonObject());
	//TSharedPtr<FJsonObject> saveJson;
	TSharedRef<TJsonReader<>> saveReader = TJsonReaderFactory<>::Create(contents);
	
	if (FJsonSerializer::Deserialize(saveReader, saveJson) && saveJson.IsValid()) {
		saveJson->TryGetNumberField(TEXT("Score"), Score);
		FString lastPlayerLoc;
		saveJson->TryGetStringField(TEXT("LastPlayerLocation"), lastPlayerLoc);
		LastPlayerLocation.InitFromString(lastPlayerLoc);
	}

	const TArray<TSharedPtr<FJsonValue>>* saveTransforms;
	bool hasSaveTransforms = saveJson->TryGetArrayField(TEXT("SaveTransformsByName"), saveTransforms);
	if (hasSaveTransforms) {
		TMap<FString, FTransform> SaveTransformsByName;

		for (auto& transformPair : *saveTransforms) {
			TSharedPtr<FJsonObject> saveTransform = transformPair->AsObject();
			
			FString transformName;
			saveTransform->TryGetStringField(TEXT("Name"), transformName);

			FString transformData;
			saveTransform->TryGetStringField(TEXT("Transform"), transformData);

			FTransform transformParsed;
			transformParsed.InitFromString(transformData);

			SaveTransformsByName.Add(transformName, transformParsed);
		}


		for (TObjectIterator<UGameSaveTransform> savedTransforms; savedTransforms; ++savedTransforms) {
			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }

			EWorldType::Type componentWorldType = (*savedTransforms)->GetWorld()->WorldType;
			if (!(componentWorldType == EWorldType::PIE || componentWorldType == EWorldType::Game)) { continue; }

			AActor* saveOwner = (*savedTransforms)->GetOwner();
			FString ownerName = saveOwner->GetName();
			FTransform* savedTransform = SaveTransformsByName.Find(ownerName);
			if (savedTransform != nullptr) {
				(*savedTransforms)->LoadTransform(SaveTransformsByName[saveOwner->GetName()]);
			}
		}
	}

	return true;
}

bool ATUTGamemodeBase::LoadGame(const FString& saveName)
{
	USaveGame* plrSaveLoad = UGameplayStatics::LoadGameFromSlot(saveName, 0);
	UTUTGameSaveGame* plrSave = Cast<UTUTGameSaveGame>(plrSaveLoad);
	if (IsValid(plrSave))
		Score = plrSave->Score;
	else return false;

	USaveGame* loadSave = UGameplayStatics::LoadGameFromSlot(saveName + TEXT("-" + GetWorld()->GetName()), 0);
	UTUTGameSaveGame* worldSave = Cast<UTUTGameSaveGame>(loadSave);

	if (IsValid(worldSave)) {
		LastPlayerLocation = worldSave->LastPlayerLocation;



		if (!worldSave->SaveTransformsByName.IsEmpty()) {
			for (TObjectIterator<UGameSaveTransform> savedTransforms; savedTransforms; ++savedTransforms) {
				if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }

				EWorldType::Type componentWorldType = (*savedTransforms)->GetWorld()->WorldType;
				if (!(componentWorldType == EWorldType::PIE || componentWorldType == EWorldType::Game)) { continue; }


				AActor* saveOwner = (*savedTransforms)->GetOwner();
				FString ownerName = saveOwner->GetName();
				FTransform* savedTransform = worldSave->SaveTransformsByName.Find(ownerName);
				if (savedTransform != nullptr) {
					(*savedTransforms)->LoadTransform(worldSave->SaveTransformsByName[saveOwner->GetName()]);
				}
			}
		}
		return true;
	}
	return false;
}

void ATUTGamemodeBase::BeginPlay()
{
	if (UseJSONSaveGame)
		LoadGameFromJSONFile(SaveName);
	else
		LoadGame(SaveName);

	Super::BeginPlay();
}

void ATUTGamemodeBase::Tick(float DeltaTime)
{
	for (TActorIterator<APlayerController> plr(GetWorld()); plr; ++plr) {
		if (!IsValid(*plr)) { return; }
		
		if (plr->IsInputKeyDown(resetBtn)) {
			skipSave = true;

			if (UseJSONSaveGame) {
				FString saveGamePath = CreateSaveFilePath(SaveName);

				IFileManager& FileManager = IFileManager::Get();
				FileManager.Delete(*saveGamePath);
			}
			else {
				UGameplayStatics::DeleteGameInSlot(SaveName, 0);
				UGameplayStatics::DeleteGameInSlot(SaveName + TEXT("-" + GetWorld()->GetName()), 0);
			}
			
			GEngine->AddOnScreenDebugMessage(2, 15.0f, FColor::Yellow, TEXT("Saves Deleted"));
			UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
		}
		break;
	}
	Super::Tick(DeltaTime);
}

void ATUTGamemodeBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (skipSave) {
		Super::EndPlay(EndPlayReason);
		return;
	}

	

	if (UseJSONSaveGame)
		SaveGameToJSONFile(SaveName);
	else
		SaveGame(SaveName);

	//SaveGameToJSONFile(worldSave, "testSave");



	Super::EndPlay(EndPlayReason);
}
