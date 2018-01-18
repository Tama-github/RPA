#ifndef BODYPART_H
#define BODYPART_H

#include "armorpiece.h"

#define MAX_STATE 5

class BodyPart
{
public:
    BodyPart();
    void equipArmor(ArmorPiece* armor);
    void takeDamage(unsigned int dmg);
    void heal(unsigned int h);
    unsigned int getState();

private:
    unsigned int state;
    ArmorPiece *armor;
};

#endif // BODYPART_H
