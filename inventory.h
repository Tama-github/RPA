#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "wearableobject.h"

class Inventory
{
public:
    Inventory() : objects (std::vector<WearableObject>()) {}
    void addObject (WearableObject wo);
    WearableObject removeObject (unsigned int idx);

private:
    std::vector<WearableObject> objects;

};

#endif // INVENTORY_H
