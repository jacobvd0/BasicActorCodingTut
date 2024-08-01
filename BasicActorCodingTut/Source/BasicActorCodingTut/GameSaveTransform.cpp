// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSaveTransform.h"

// Sets default values for this component's properties
UGameSaveTransform::UGameSaveTransform()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGameSaveTransform::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

bool UGameSaveTransform::SaveTransform(FTransform& saveTransform)
{
	AActor* owner = GetOwner();
	saveTransform = owner->GetActorTransform();

	return true;
}

void UGameSaveTransform::LoadTransform(const FTransform& loadTransform)
{
	AActor* owner = GetOwner();
	owner->SetActorTransform(loadTransform);
}


// Called every frame
void UGameSaveTransform::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

