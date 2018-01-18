#ifndef ABILITY_H
#define ABILITY_H

#include <iostream>
#include <string>
#include "level.h"
#include "characteristic.h"


#define MAX_ABILITY_LEVEL 5

class Ability
{
public:
    Ability(Characteristic *c, std::string _name, unsigned int l, float learningModifier, unsigned int xp) :
        characteristicInfluant (c),
        name (_name),
        level (Level(MAX_ABILITY_LEVEL, l, learningModifier, xp))
    {}
    bool use(unsigned int xpGaigned);

private:
    Characteristic *characteristicInfluant;
    std::string name;
    Level level;

};

#endif // ABILITY_H
