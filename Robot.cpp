#include "Robot.h"

 std::string Robot::getName(){
    return "Robot";
}

  bool Robot::beats(Move* other){
    std::string otherName=other->getName();
    return (otherName=="Ninja" || otherName=="Zombie");
}