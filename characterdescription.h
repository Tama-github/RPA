#ifndef CHARACTERDESCRIPTION_H
#define CHARACTERDESCRIPTION_H

#include <iostream>
#include <fstream>

class CharacterDescription
{
public:
    CharacterDescription(std::string _fileName) : fileName(_fileName) {};

private:
    std::string fileName;

};

#endif // CHARACTERDESCRIPTION_H
