#include "inventory.h"

void Inventory::addObject (WearableObject wo) {
    this->objects.push_back(wo);
}

WearableObject Inventory::removeObject (unsigned int idx) {
    if (idx >= this->objects.size())
        return this->objects.back();
    return this->objects[idx];
}
