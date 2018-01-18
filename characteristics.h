#ifndef CHARACTERISTICS_H
#define CHARACTERISTICS_H

#include <vector>
#include "characteristic.h"

class Characteristics
{
public:
    Characteristics(unsigned int intelLvl, unsigned int intelCurrentXp, float im,
                    unsigned int agiLvl, unsigned int agiCurrentXp, float am,
                    unsigned int strLvl, unsigned int strCurrentXp, float sm);

    Characteristic getInetelligence ();
    Characteristic getAgility ();
    Characteristic getStrength ();


private:
    Characteristic intelligence;
    Characteristic agility;
    Characteristic streagth;

};

#endif // CHARACTERISTICS_H
