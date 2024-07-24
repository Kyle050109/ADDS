#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>
#include <iostream>

class Human : public Player{
private:
    std::string name;
public:
    Human(std::string name="Human");
    char makeMove();
    std::string getName(){return name;}
};

#endif
