#include <stdlib.h>
#include <iostream>

// This program will be a game

int main() {

  srand (time(NULL));

  int computer = rand() % 3+1;

  int user = 0;

  bool winner;
  bool tie = false;

  std::cout << "======================\n";
  std::cout << "Rock, Paper, Scissors!\n";
  std::cout << "======================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";

  std::cout << "shoot!\n";

  std::cin >> user;

  if (user == computer) {
    std::cout << "It's a tie!\n";
    tie = true;
  } else if (user == 1) {
    std::cout << "You chose Rock!\n";
    if (computer == 2) {
      std::cout << "Computer chose Paper...\n";
      winner = false;
    } else if (computer == 3) {
      std::cout << "Computer chose Paper...\n";
      winner = true;
    }

  } else if (user == 2) {
    std::cout << "You chose Paper!\n";
    if (computer == 3) {
      std::cout << "Computer chose Scissors...\n";
      winner = false;
    } else if (computer == 1) {
      std::cout << "Computer chose Rock...\n";
      winner = true;
    }

  } else if (user == 3) {
    std::cout << "You chose Scissors!\n";
    if (computer == 1) {
      std::cout << "Computer chose Rock...\n";
      winner = false;
    } else if (computer == 3) {
      std::cout << "Computer chose Paper...\n";
      winner = true;
    }
  }

  if (tie) {
    std::cout << "so...\n EVERYONE WINS";
  } else if (winner) {std::cout << "so...\n YOU WIN\n";
  } else if (!winner) { std::cout << "So...\n YOU LOSE\n";
  }
}