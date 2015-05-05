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

	damage = 10.0f;

	doesSnare = true;

	alertLevel = 1;

}

// Called when the game starts or when spawned
void ATrap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrap::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

