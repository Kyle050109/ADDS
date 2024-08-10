#include "Reverser.h"

int Reverser::reverseDigit(int value){
    if (value<0){
        return -1;
    }

    if (value<10){
        return value;
    }

    int lastNumber=value % 10;
    int remainNumber=value / 10;

    return lastNumber+reverseDigit(remainNumber)*10;
}

std::string Reverser::reverseString(std::string characters){
    if (characters.empty()){
        return "ERROR";
    }
    if (characters.length()<=1){
        return characters;
    }
    return reverseString(characters.substr(1))+characters[0];
}
