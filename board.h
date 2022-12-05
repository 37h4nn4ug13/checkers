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
    Board(const int &size);
    bool move(const int &start, const int &end, const char &player);
    void reset();
    void printBoard();
    
};

#endif 