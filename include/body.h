#ifndef BODY_H
#define BODY_H

#include <vector>
#include "bodypart.h"


class Body
{
public:
    Body();
    static const int HEAD = 0;
    static const int SHOULDER_R = 1;
    static const int SHOULDER_L = 2;
    static const int CHEST = 3;
    static const int ARM_R = 4;
    static const int ARM_L = 5;
    static const int HAND_R = 6;
    static const int HAND_L = 7;
    static const int LEG_R = 8;
    static const int LEG_L = 9;
    static const int FEET_R = 10;
    static const int FEET_L = 11;
    BodyPart getHead();
    BodyPart getShoulderR();
    BodyPart getShoulderL();
    BodyPart getChest();
    BodyPart getArmR();
    BodyPart getArmL();
    BodyPart getHandR();
    BodyPart getHandL();
    BodyPart getLegR();
    BodyPart getLegL();
    BodyPart getFeetR();
    BodyPart getFeetL();
    std::vector<BodyPart> getBodyParts();

    float getBodyState();

private:
    std::vector<BodyPart> bodyParts;

};

#endif // BODY_H
