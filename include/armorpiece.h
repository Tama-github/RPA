#ifndef ARMORPIECE_H
#define ARMORPIECE_H

#include <string>
#include "wearableobject.h"

class ArmorPiece : public WearableObject
{
public:
    ArmorPiece(unsigned int _defenceIndex, std::string _name, float _modifier) :
        defenceIndexMax (_defenceIndex),
        currentDefenceIndex (_defenceIndex),
        armorName (_name),
        modifier (_modifier)
    {}
    unsigned int takeDamage(unsigned int damages);
    void repair();
    float getModifier();

private:
    unsigned int defenceIndexMax;
    unsigned int currentDefenceIndex;
    std::string armorName;
    float modifier;

};

#endif // ARMORPIECE_H
