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

void ATUTGamemodeBase::ReportScore(int newScore)
{
	if (newScore > Highscore) {
		Highscore = newScore;
	}
}

FVector ATUTGamemodeBase::GetLastSavedPlayerLocation()
{
	return LastPlayerLocation;
}

void ATUTGamemodeBase::BeginPlay()
{
	USaveGame* loadSave = UGameplayStatics::LoadGameFromSlot(TEXT("SINGLEPLAYER"), 0);
	UTUTGameSaveGame* mySave = Cast<UTUTGameSaveGame>(loadSave);

	if (IsValid(mySave)) {
		Highscore = mySave->Highscore;
		LastPlayerLocation = mySave->LastPlayerLocation;



		if (!mySave->SaveTransformsByName.IsEmpty()) {
			for (TObjectIterator<UGameSaveTransform> savedTransforms; savedTransforms; ++savedTransforms) {
				if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }

				EWorldType::Type componentWorldType = (*savedTransforms)->GetWorld()->WorldType;
				//if (!(componentWorldType == EWorldType::PIE || componentWorldType == EWorldType::Game)) { continue; }


				AActor* saveOwner = (*savedTransforms)->GetOwner();
				FString ownerName = saveOwner->GetName();
				FTransform * savedTransform = mySave->SaveTransformsByName.Find(ownerName);
				if (savedTransform != nullptr) {
					(*savedTransforms)->LoadTransform(mySave->SaveTransformsByName[saveOwner->GetName()]);
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
	USaveGame* newSave = UGameplayStatics::CreateSaveGameObject(UTUTGameSaveGame::StaticClass());
	UTUTGameSaveGame* mySave = Cast<UTUTGameSaveGame>(newSave);

	if (IsValid(mySave)) {
		mySave->Highscore = Highscore;

		for (TActorIterator<ATUTGameCharacter> player(GetWorld()); player; ++player) {
			if (!IsValid(*player)) { return; }
			mySave->LastPlayerLocation = player->GetActorLocation();
			break;
		}


		for (TObjectIterator<UGameSaveTransform> savedTransforms; savedTransforms; ++savedTransforms) {
			if (IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }

			AActor* saveOwner = savedTransforms->GetOwner();
			EWorldType::Type ownerWorldType = saveOwner->GetWorld()->WorldType;

			//if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) { continue; }

			FString ownerName = saveOwner->GetName();
			FTransform newSaveTransform;
			savedTransforms->SaveTransform(newSaveTransform);

			mySave->SaveTransformsByName.FindOrAdd(saveOwner->GetName(), newSaveTransform);
		}

		UGameplayStatics::SaveGameToSlot(mySave, TEXT("SINGLEPLAYER"), 0);
	}


	Super::EndPlay(EndPlayReason);
}
