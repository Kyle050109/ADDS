#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper : public Move{
public:
    std::string getName();
    
    bool beats(Move* other);
};
#endif
