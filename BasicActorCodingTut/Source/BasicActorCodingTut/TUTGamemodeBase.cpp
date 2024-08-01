// Fill out your copyright notice in the Description page of Project Settings.


#include "TUTGamemodeBase.h"
#include "Kismet/GameplayStatics.h"
#include "TUTGameSaveGame.h"
#include "TUTGameCharacter.h"
#include "Engine.h"

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
		//mySave->LastPlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

		UGameplayStatics::SaveGameToSlot(mySave, TEXT("SINGLEPLAYER"), 0);
	}


	Super::EndPlay(EndPlayReason);
}
