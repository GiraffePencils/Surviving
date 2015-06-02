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
	for (float i = 0; i < 5; i++)
	{
		for (float j = 0; j < 10; j++)
		{
			FVector2D coord(i,j);
			inventory.Emplace(coord);
		}
	}
	inventory[3].AddItem();
	inventory[3].AddItem();
	inventory[3].AddItem();
	// ...
	
}


// Called every frame
void UInventoryManagement::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

float UInventoryManagement::GetArrayPoint(FVector2D gridPoint)
{
	float result = 0;

	result = ((gridPoint.Y)*10) + (gridPoint.X);

	return result;
}

bool UInventoryManagement::PlaceItem(FVector2D vstorageID)
{

	float istorageID = GetArrayPoint(vstorageID);

	if (istorageID > 0 && istorageID < 50)
	{
		float item = inventory[istorageID].TakeItem(1);
		if (item != NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

