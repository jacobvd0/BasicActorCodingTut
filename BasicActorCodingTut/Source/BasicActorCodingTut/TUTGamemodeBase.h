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
	
	float timeElapsed = 0.0f;
	int Highscore = 0;

public:
	ATUTGamemodeBase();


};
