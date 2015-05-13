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


	UPROPERTY()
		USceneComponent* OurVisibleComponent;

	UPROPERTY()
		UMaterial* trapColour;

	//Create the the containers for the base trap class
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap Properties")
		bool isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap Properties")
		bool wasSet;

	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		float trapRadius;

	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		uint32 trapState;

	//Function to be called on overlap
	UFUNCTION()
		void OnOverlap(AActor* OtherActor);

	//Function to be called on overlap End
	UFUNCTION()
		void OnOverlapEnd(AActor* OtherActor);

	//Function to Set the trap
	UFUNCTION(BlueprintCallable, Category = "Trap Commands")
		virtual void SetTrap(AActor* OtherActor);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;



};