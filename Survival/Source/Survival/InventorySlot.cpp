// This Code was written by Dean Lynch AKA GiraffePencils

#include "Survival.h"
#include "InventorySlot.h"

InventorySlot::InventorySlot()
{
	storageID = 0.0f;
	itemID = 0.0f;
	quantity = 0.0f;
}

InventorySlot::InventorySlot(float id)
{
	storageID = id;
	itemID = 0.0f;
	quantity = 0.0f;
}

InventorySlot::~InventorySlot()
{
}

float InventorySlot::GetStorageID()
{
	return storageID;
}

void InventorySlot::SetStorageID(float id)
{
	storageID = id;
}

float InventorySlot::GetItemID()
{
	return itemID;
}

void InventorySlot::SetItemID(float id)
{
	itemID = id;
}

float InventorySlot::GetQuatity()
{
	return quantity;
}

bool InventorySlot::AddItem()
{
	if (quantity < 255.0f)
	{
		quantity++;
		return true;
	}
	return false;
}

float InventorySlot::TakeItem(float amount)
{
	if ((quantity - amount) < 0)
	{
		return NULL;
	}
	quantity -= amount;
	return amount;
}