#include "Pirate.h"

std::string Pirate::getName(){
    return "Pirate";
}

 bool Pirate::beats(Move* other){
    std::string otherName=other->getName();
    return (otherName=="Robot" || otherName=="Monkey");
}