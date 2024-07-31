// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "TUTGameSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class BASICACTORCODINGTUT_API UTUTGameSaveGame : public USaveGame
{
	GENERATED_BODY()

	
	
public:
	UPROPERTY()
	int Highscore = 0;
	
};
