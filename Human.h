#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"
#include <iostream>
#include <string>

class Human : public Player{
private:
    std::string name;

public:
    Human(std::string name="Human") : name(name){}
    Move* makeMove();
    std::string getName();
};
#endif