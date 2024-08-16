// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TUTGamemodeBase.generated.h"

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


	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY()
	FKey resetBtn = EKeys::X;
}; 
