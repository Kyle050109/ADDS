#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move{
public:
    std::string getName();

    bool beats(Move* other);
};
#endif
