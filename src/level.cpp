#include "../include/level.h"

Level::Level(unsigned int _maxLevel, unsigned int _currentLevel, float _learningModifier, unsigned int _xp) :
    maxLevel(_maxLevel),
    currentLevel(_currentLevel),
    currentXP(_xp),
    maxXP(this->computeMaxXp()),
    learningModifier(_learningModifier)
{}

void Level::levelUp() {
    this->currentLevel ++;
    this->currentXP = 0;
    this->maxXP = this->computeMaxXp();
}

unsigned int Level::getCurrentLevel () {
    return this->currentLevel;
}

unsigned int Level::getMaxLevel () {
    return this->maxLevel;
}

bool Level::addXP (unsigned int xpGaigned) {
    if (this->currentXP >= this->maxXP) {
        return true;
    }
    this->currentXP += xpGaigned;
    if (this->currentXP >= this->maxXP) {
        return true;
    }
    return false;
}

unsigned int Level::computeMaxXp () {
    return (this->currentLevel+1) * 10 * this->learningModifier;
}
