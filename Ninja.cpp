#include "Ninja.h"

std::string Ninja::getName(){
    return "Ninja";
}

bool Ninja::beats(Move* other){
        std::string otherName=other->getName();
        return (otherName=="Pirate" || otherName=="Zombie");
}