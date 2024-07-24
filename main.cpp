#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main() {
  Human human("Human");
  Computer computer;
  Referee referee;

  Player* winner = referee.refGame(&human, &computer);

  if (winner == nullptr) {
    std::cout << "Tie" << std::endl;
  } else {
    std::cout << winner->getName() << std::endl;
  }

  return 0;
}
