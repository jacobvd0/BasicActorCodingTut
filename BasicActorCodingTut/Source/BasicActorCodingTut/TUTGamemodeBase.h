// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TUTGamemodeBase.generated.h"
//#include "TUTGameSaveGame.h"

/**
 * 
 */
UCLASS()
class BASICACTORCODINGTUT_API ATUTGamemodeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	float TimeElapsed = 0.0f;
	int Score = 0;
	FVector LastPlayerLocation = FVector::ZeroVector;
	bool skipSave = false;

public:
	ATUTGamemodeBase();

	void AddScore(int scoreToAdd);
	FVector GetLastSavedPlayerLocation();

	FString CreateSaveFilePath(const FString& saveName);

	bool SaveGameToJSONFile(const FString& saveName);
	bool SaveGame(const FString& saveName);

	bool LoadGameFromJSONFile(const FString& saveName);
	bool LoadGame(const FString& saveName);

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY()
	FKey resetBtn = EKeys::X;

protected:
	UPROPERTY(EditDefaultsOnly)
	bool UseJSONSaveGame = true;
	UPROPERTY(EditDefaultsOnly)
	FString SaveName = "SINGLEPLAYER";
}; 
