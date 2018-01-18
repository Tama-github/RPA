#include "bodypart.h"

BodyPart::BodyPart() {
    this->state = MAX_STATE;
}

void BodyPart::equipArmor(ArmorPiece* armor) {
    this->armor = armor;
}

void BodyPart::takeDamage(unsigned int dmg) {
    this->state -= armor->takeDamage(dmg);
}

void BodyPart::heal(unsigned int h) {
    if (h+this->state > MAX_STATE)
        this->state = MAX_STATE;
    else
        this->state += h;
}

unsigned int BodyPart::getState() {
    return this->state;
}
