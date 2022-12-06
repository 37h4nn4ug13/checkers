#ifndef CHECKER_H
#define CHECKER_H

class Checker {
  private:
    char symbol;
    bool isCrowned;
  public: 
    Checker();
    Checker(int value);
    Checker(const Checker& cker);
    void crown();
    char getSymbol();
    bool checkIsCrowned();

};

#endif