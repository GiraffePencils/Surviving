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

	InventorySlot(float id);

	~InventorySlot();

	float GetStorageID();
	void SetStorageID(float id);

	float GetItemID();
	void SetItemID(float id);

	float GetQuatity();

	bool AddItem();
	float TakeItem(float amount);

private:
	UPROPERTY()
	float storageID;
	UPROPERTY()
	float itemID;
	UPROPERTY()
	float quantity;

};
