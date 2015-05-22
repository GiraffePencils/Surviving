// This Code was written by Dean Lynch AKA GiraffePencils

#include "Survival.h"
#include "InventoryManagement.h"


// Sets default values for this component's properties
UInventoryManagement::UInventoryManagement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsInitializeComponent = true;
	PrimaryComponentTick.bCanEverTick = true;

	

	// ...
}


// Called when the game starts
void UInventoryManagement::InitializeComponent()
{
	Super::InitializeComponent();

	//inventory.Init(5);
	for (uint8 i = 0; i < 5; i++)
	{
		inventory.Emplace(i);
	}
	inventory[2].AddItem();
	inventory[2].AddItem();
	inventory[2].AddItem();
	// ...
	
}


// Called every frame
void UInventoryManagement::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

bool UInventoryManagement::PlaceItem(uint8 storageID)
{
	float item = inventory[storageID].TakeItem(1);
	if( item != NULL)
	{
		return true;
	}
	else
	{
		return false; 
	}
}

