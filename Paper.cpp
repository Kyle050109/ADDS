#include "Paper.h"

std::string Paper::getName(){
    return "Paper";
}

bool Paper::beats(Move* other){
    std::string otherName = other->getName();
    return (otherName == "Rock");
}

