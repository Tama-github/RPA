#ifndef XPMANAGER_H
#define XPMANAGER_H

#include "level.h"

class XPManager {
public:
    XPManager (Level *lvl, float learningModifier, unsigned int xp);
    bool add(unsigned int xpGaigned);
    void lvlUPTriggered ();

private:
    Level *levelFor;
    unsigned int currentXP;
    unsigned int maxXP;
    float learningModifier;
    unsigned int computeMaxXp ();
};

#endif // XPMANAGER_H
