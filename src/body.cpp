#include "../include/body.h"

Body::Body() {
    for (int i = 0; i < 12; i++) {
        this->bodyParts.push_back(BodyPart());
    }
}

BodyPart Body::getHead() {
    return this->bodyParts[Body::HEAD];
}

BodyPart Body::getShoulderR() {
    return this->bodyParts[Body::SHOULDER_R];
}

BodyPart Body::getShoulderL() {
    return this->bodyParts[Body::SHOULDER_L];
}

BodyPart Body::getChest() {
    return this->bodyParts[Body::CHEST];
}

BodyPart Body::getArmR() {
    return this->bodyParts[Body::ARM_R];
}

BodyPart Body::getArmL() {
    return this->bodyParts[Body::ARM_L];
}

BodyPart Body::getHandR() {
    return this->bodyParts[Body::HAND_R];
}

BodyPart Body::getHandL() {
    return this->bodyParts[Body::HAND_L];
}

BodyPart Body::getLegR() {
    return this->bodyParts[Body::LEG_R];
}

BodyPart Body::getLegL() {
    return this->bodyParts[Body::LEG_L];
}

BodyPart Body::getFeetR() {
    return this->bodyParts[Body::FEET_R];
}

BodyPart Body::getFeetL() {
    return this->bodyParts[Body::FEET_L];
}

std::vector<BodyPart> Body::getBodyParts() {
    return this->bodyParts;
}

float Body::getBodyState() {
    float res = 0.f;
    for (int i = 0; i < 12; i++) {
        res += (float)this->bodyParts[i].getState();
    }
    return res/12.f;
}
