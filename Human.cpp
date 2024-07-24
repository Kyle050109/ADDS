#include "Human.h"

Human::Human(std::string name) : name(name){}
char Human::makeMove(){
    char move;
    std::cin >>move;
    return move;
}
s