#ifndef CHECKER_H
#define CHECKER_H

class Checker {
  private:
    char symbol;
    bool isCrowned;
  public: 
    Checker(int value);
    Checker(const Checker& cker);
    void crown();
    char getSymbol();

};

#endif