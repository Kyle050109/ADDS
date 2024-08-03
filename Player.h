#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <string>

class Player {
public:
    virtual Move* makeMove()=0;
    virtual std::string getName()=0;
    virtual ~Player()=0;
};

#endif
