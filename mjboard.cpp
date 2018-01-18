#include "mjboard.h"

MJBoard::MJBoard()
{
    this->characters = std::vector();
}

void MJBoard::addCharacter(Character c) {
    this->characters.push_back(c);
}
