#ifndef BOARD_H
#define BOARD_H
#include <iostream> 
#include <vector>
#include "checker.h"

class Board {
  private: 
    int size;
    std::vector<Checker> spaces;

  public: 
    Board(int size);
    void reset();
    void printBoard();
    
};

#endif 