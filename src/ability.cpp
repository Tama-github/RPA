#include "ability.h"

bool Ability::use(unsigned int xpGaigned) {
    this->characteristicInfluant->use();
    return this->level.addXP(xpGaigned);
}
