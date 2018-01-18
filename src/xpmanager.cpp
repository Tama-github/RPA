#include "xpmanager.h"

XPManager::XPManager(Level *lvl, float learningModifier, unsigned int xp)
{
    this->levelFor = lvl;
    this->learningModifier = learningModifier;
    this->currentXP = xp;
    this->maxXP = this->computeMaxXp();
}

bool XPManager::add(unsigned int xpGaigned) {
    if (this->currentXP >= this->maxXP) {
        return true;
    }
    this->currentXP += xpGaigned;
    if (this->currentXP >= this->maxXP) {
        return true;
    }
    return false;
}

unsigned int XPManager::computeMaxXp () {
    return (this->levelFor->getCurrentLevel()+1) * 10 * this->learningModifier;
}

void XPManager::lvlUPTriggered () {
    this->currentXP = 0;
    this->maxXP = this->computeMaxXp();
}
