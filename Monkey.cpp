#include "Monkey.h"

std::string Monkey::getName(){
        return "Monkey";
}

bool Monkey::beats(Move* other){
        std::string otherName=other->getName();
        return (otherName=="Robot" || otherName=="Ninja");
}