#include "../include/armorpiece.h"


unsigned int ArmorPiece::takeDamage(unsigned int damages) {
    unsigned int res = 0;
    if (damages > this->currentDefenceIndex) {
        res = damages - this->currentDefenceIndex;
        this->currentDefenceIndex = 0;
    } else {
        this->currentDefenceIndex -= damages;
    }
    return res;
}

void ArmorPiece::repair() {
    this->currentDefenceIndex = this->defenceIndexMax;
}

float ArmorPiece::getModifier() {
    return this->modifier;
}
