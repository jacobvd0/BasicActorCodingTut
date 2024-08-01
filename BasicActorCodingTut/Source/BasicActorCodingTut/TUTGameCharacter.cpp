// Fill out your copyright notice in the Description page of Project Settings.


#include "TUTGameCharacter.h"
#include "TUTGamemodeBase.h"
#include "Containers/StringView.h"

// Sets default values
ATUTGameCharacter::ATUTGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATUTGameCharacter::BeginPlay()
{
	Super::BeginPlay();

	ATUTGamemodeBase* gameMode = GetWorld()->GetAuthGameMode<ATUTGamemodeBase>();

	if (IsValid(gameMode)) {
		bool isDefaultLoc = gameMode->GetLastSavedPlayerLocation() == FVector::ZeroVector;
		if (!isDefaultLoc) {
			TeleportTo(gameMode->GetLastSavedPlayerLocation(), GetActorRotation());
		}
	}
	
}

// Called every frame
void ATUTGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATUTGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

