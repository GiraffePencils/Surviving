// This Code was written by Dean Lynch AKA GiraffePencils

#pragma once

#include "Components/ActorComponent.h"
#include "InventorySlot.h"
#include "InventoryManagement.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SURVIVAL_API UInventoryManagement : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryManagement();

	// Called when the game starts
	virtual void InitializeComponent() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UFUNCTION(BlueprintCallable, Category = "Place Item")
		bool PlaceItem(FVector2D vstorageID);

	float GetArrayPoint(FVector2D gridPoint);

	//UPROPERTY()
	TArray<InventorySlot> inventory;
	
};
