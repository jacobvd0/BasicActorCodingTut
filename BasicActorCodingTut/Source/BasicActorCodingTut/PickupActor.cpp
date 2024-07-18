// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupActor.h"
#include "Components/StaticMeshComponent.h" // for UStaticMeshComponent

// Sets default values
APickupActor::APickupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));

	RootComponent = PickupMesh;
}

// Called when the game starts or when spawned
void APickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float GameSeconds = GetWorld()->GetTimeSeconds();

	float AngleInRadians = FMath::DegreesToRadians(GameSeconds) * RotationSpeed;

	FRotator NewRotation = FRotator(FQuat(FVector(0.0f, 0.0f, 1.0f), AngleInRadians));

	SetActorRotation(NewRotation);
}

