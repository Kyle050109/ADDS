#include "Scissors.h"

std::string Scissors::getName(){
    return "Scissors";
}

bool Scissors::beats(Move* other){
    std::string otherName=other->getName();
    return (otherName=="Paper");
}