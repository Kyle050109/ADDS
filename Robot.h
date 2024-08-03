#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move{
public:
    std::string getName();

    bool beats(Move* other);
};
#endif
