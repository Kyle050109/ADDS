#include "Rock.h"

std::string Rock::getName(){
     return "Rock";
}

bool Rock::beats(Move* other){
    std::string otherName=other->getName();
    return (otherName=="Scissors");
}