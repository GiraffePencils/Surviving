// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Trap.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorBeginOverlapSignature, class AActor*, OtherActor);

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
		USceneComponent* OurRootComponent;

	UPROPERTY()
		UMaterial* trapColour;

	//Create the the containers for the base trap class
	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		bool isActive;

	UPROPERTY(EditAnywhere, Category = "Trap Properties")
		float trapRadius;

	//Function to be called on overlap
	UFUNCTION()
		void OnOverlap(AActor* OtherActor);

		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;



};