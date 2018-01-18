#ifndef MJBOARD_H
#define MJBOARD_H

#include <vector>
#include "character.h"

class MJBoard
{
public:
    MJBoard();
    void addCharacter(Character c);

private:
    std::vector<Character> characters;

};

#endif // MJBOARD_H
