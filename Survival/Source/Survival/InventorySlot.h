// This Code was written by Dean Lynch AKA GiraffePencils

#pragma once

//#include "InventorySlot.generated.h"
/**
 * 
 */
class SURVIVAL_API InventorySlot
{
public:
	InventorySlot();

	InventorySlot(FVector2D id);

	~InventorySlot();

	FVector2D GetStorageID();
	void SetStorageID(FVector2D id);

	float GetItemID();
	void SetItemID(float id);

	float GetQuatity();

	bool AddItem();
	float TakeItem(float amount);

private:
	UPROPERTY()
	FVector2D storageID;
	UPROPERTY()
	float itemID;
	UPROPERTY()
	float quantity;

};
