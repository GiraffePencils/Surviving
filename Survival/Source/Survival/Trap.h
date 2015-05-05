// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Trap.generated.h"

UCLASS()
class SURVIVAL_API ATrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrap();

	//Create the the containers for the base trap class
	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		bool isActive;

	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		float trapRadius;

	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		float damage;

	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		bool doesSnare;

	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		int32 alertLevel;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
