#include "Zombie.h"

std::string Zombie::getName(){
        return "Zombie";
}

bool Zombie::beats(Move* other){
    std::string otherName=other->getName();
    return (otherName=="Monkey" || otherName=="Pirate");
}