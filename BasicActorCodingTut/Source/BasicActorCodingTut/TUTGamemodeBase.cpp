// Fill out your copyright notice in the Description page of Project Settings.


#include "TUTGamemodeBase.h"
#include "Kismet/GameplayStatics.h"
#include "TUTGameSaveGame.h"
#include "TUTGameCharacter.h"
#include "Engine.h"
#include "GameSaveTransform.h"

ATUTGamemodeBase::ATUTGamemodeBase()
{
}

void ATUTGamemodeBase::AddScore(int scoreToAdd)
{
	GEngine->AddOnScreenDebugMessage(1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%i (+%i)"), Score, scoreToAdd));

	Score += scoreToAdd;
}

FVector ATUTGamemodeBase::GetLastSavedPlayerLocation()
{
	return LastPlayerLocation;
}

void ATUTGamemodeBase::BeginPlay()
{
	USaveGame* plrSaveLoad = UGameplayStatics::LoadGameFromSlot(TEXT("SINGLEPLAYER"), 0);
	UTUTGameSaveGame* plrSave = Cast<UTUTGameSaveGame>(plrSaveLoad);
	if (IsValid(plrSave)) {
		Score = plrSave->Score;
	}

	USaveGame* loadSave = UGameplayStatics::LoadGameFromSlot(TEXT("SINGLEPLAYER-" + GetWorld()->GetName()), 0);
	UTUTGameSaveGame* worldSave = Cast<UTUTGameSaveGame>(loadSave);

	if (IsValid(worldSave)) {
		//Highscore = mySave->Highscore;
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
	}

	Super::BeginPlay();
}

void ATUTGamemodeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATUTGamemodeBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	USaveGame* newPlrSave = UGameplayStatics::CreateSaveGameObject(UTUTGameSaveGame::StaticClass());
	UTUTGameSaveGame* plrSave = Cast<UTUTGameSaveGame>(newPlrSave);
	if (IsValid(plrSave)) {
		plrSave->Score = Score;
		UGameplayStatics::SaveGameToSlot(plrSave, TEXT("SINGLEPLAYER"), 0);
	}


	USaveGame* newSave = UGameplayStatics::CreateSaveGameObject(UTUTGameSaveGame::StaticClass());
	UTUTGameSaveGame* worldSave = Cast<UTUTGameSaveGame>(newSave);

	if (IsValid(worldSave)) {
		//mySave->Highscore = Highscore;

		for (TActorIterator<ATUTGameCharacter> player(GetWorld()); player; ++player) {
			if (!IsValid(*player)) { return; }
			worldSave->LastPlayerLocation = player->GetActorLocation();
			break;
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

		UGameplayStatics::SaveGameToSlot(worldSave, TEXT("SINGLEPLAYER-" + GetWorld()->GetName()), 0);
	}


	Super::EndPlay(EndPlayReason);
}
