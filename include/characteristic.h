#ifndef CHARACTERISTIC_H
#define CHARACTERISTIC_H

#include "level.h"

#define MAX_CHARA_LEVEL 20

enum class CharName {Agility, Intelligence, Strength};
class Characteristic
{
public:
    Characteristic(char type, float learningModifier, unsigned int lvl, unsigned int xp) :
        level (Level(MAX_CHARA_LEVEL, lvl, learningModifier, xp))
    {
        switch (type) {
        case 'i':
            this->characteristicName = CharName::Intelligence;
            break;
        case 'a':
            this->characteristicName = CharName::Agility;
            break;
        case 's':
            this->characteristicName = CharName::Strength;
            break;
        default:
            break;
        }
    }
    bool use(unsigned int xp = 1);
    void triggerLvlUp ();

private:
    CharName characteristicName;
    Level level;

};

#endif // CHARACTERISTIC_H
