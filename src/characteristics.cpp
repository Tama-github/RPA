#include "../include/characteristics.h"

Characteristics::Characteristics(unsigned int intelLvl, unsigned int intelCurrentXp, float im,
                                 unsigned int agiLvl, unsigned int agiCurrentXp, float am,
                                 unsigned int strLvl, unsigned int strCurrentXp, float sm) :
    intelligence (Characteristic('i', im, intelLvl, intelCurrentXp)),
    agility (Characteristic('a', am, agiLvl, agiCurrentXp)),
    streagth (Characteristic('s', sm, strLvl, strCurrentXp))
{}

Characteristic Characteristics::getInetelligence () {
    return this->intelligence;
}

Characteristic Characteristics::getAgility () {
    return this->agility;
}

Characteristic Characteristics::getStrength () {
   return this->streagth;
}
