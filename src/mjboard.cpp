#include "../include/mjboard.h"

MJBoard::MJBoard()
{
    this->characters = std::vector<Character>();
}

void MJBoard::addCharacter(Character c) {
    this->characters.push_back(c);
}
