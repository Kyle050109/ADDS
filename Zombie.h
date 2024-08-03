#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move{
public:
    std::string getName();

    bool beats(Move* other);
};
#endif
