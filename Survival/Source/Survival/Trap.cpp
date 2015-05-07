// Fill out your copyright notice in the Description page of Project Settings.

#include "Survival.h"
#include "Trap.h"


// Sets default values
ATrap::ATrap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set all the Default values
	isActive = true;

	trapRadius = 40.0f;

	// Collision Sphere for our player interaction.
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereComponent;
	SphereComponent->InitSphereRadius(trapRadius);
	SphereComponent->SetCollisionProfileName(TEXT("Trigger"));

	// Create and position a mesh component so we can see where our sphere is
	UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	SphereVisual->AttachTo(RootComponent);
	SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	SphereVisual->SetWorldScale3D(FVector(0.8f));
	SphereVisual->SetCollisionProfileName(TEXT("Trigger"));

	//Delegate declaration.
	OnActorBeginOverlap.AddDynamic(this, &ATrap::OnOverlap);
}

// Called when the game starts or when spawned.
void ATrap::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame.
void ATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Do something with the other actor.
void ATrap::OnOverlap(AActor* OtherActor)
{
	if (OtherActor)
	isActive = false;

}