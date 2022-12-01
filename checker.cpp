#include "checker.h"
#include <iostream> 

Checker::Checker(int value) {
    Checker::isCrowned = false;
    if (value == 1) {
        symbol = 'X';
    }
    else if (value == 2) {
        symbol = 'O';
    }
    else if (value == 0) {
        symbol = ' ';
    }
    else {
        std::cout << "Error creating checker. Was given a value of " << value << std::endl; 
    }
}
Checker::Checker(const Checker& cker) {
    symbol = cker.symbol;
    isCrowned = cker.isCrowned;
    
}
void Checker::crown() {
    Checker::isCrowned = true;
}

char Checker::getSymbol() {
    return Checker::symbol;
}