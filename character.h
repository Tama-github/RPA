#ifndef CHARACTER_H
#define CHARACTER_H

#include <vector>
#include <string>
#include "ability.h"
#include "characteristic.h"
#include "body.h"

class Character
{
public:
    Character(std::string _name, unsigned int intelLvl, unsigned int intelCurrentXp, float im,
              unsigned int agiLvl, unsigned int agiCurrentXp, float am,
              unsigned int strLvl, unsigned int strCurrentXp, float sm) :
    name (_name),
    intelligence (Characteristic('i', im, intelLvl, intelCurrentXp)),
    agility (Characteristic('a', am, agiLvl, agiCurrentXp)),
    strength (Characteristic('s', sm, strLvl, strCurrentXp))
    {}
    void addAbility (Ability toAdd);

private:
    std::string name;
    unsigned int painResistance;
    Body body;
    Characteristic intelligence;
    Characteristic agility;
    Characteristic strength;
    std::vector<Ability> abilitys;
};

#endif // CHARACTER_H
