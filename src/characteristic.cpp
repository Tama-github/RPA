#include "characteristic.h"

bool Characteristic::use (unsigned int xp) {
    return this->level.addXP(xp);
}

void Characteristic::triggerLvlUp () {
    this->level.levelUp();
}
