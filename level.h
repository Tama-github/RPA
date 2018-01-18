#ifndef LEVEL_H
#define LEVEL_H


class Level {
public:
    Level(unsigned int maxLevel, unsigned int currentLevel, float learningModifier, unsigned int xp);
    void levelUp();
    unsigned int getCurrentLevel ();
    unsigned int getMaxLevel ();
    bool addXP (unsigned int xpGaigned);

private:
    unsigned int currentLevel;
    unsigned int maxLevel;
    unsigned int currentXP;
    unsigned int maxXP;
    float learningModifier;
    unsigned int computeMaxXp ();
};

#endif // LEVEL_H
