#include "board.h" 

Board::Board(int size) {
    Board::size = size;
    Checker x = Checker(1);
    Checker y = Checker(2);
    Checker blank = Checker(0);
    Board::spaces.resize(size*size, Checker(0));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((j%2+(i+1)%2)%2 == 0) {
                if (i < 3) {

                    Board::spaces.at(size*i+j) = x;
                }
                else if (i > 4) {
                    Board::spaces.at(size*i+j) = y;
                }
                else {
                    Board::spaces.at(size*i+j);
                }
            }
            Board::spaces.at(size*i+j);
        }
    }
}

void Board::printBoard() {\
    for (int i = 0; i < Board::size; i++) {
        
        for (int j = 0; j < Board::size; j++) {
            std::cout << "┏━━━┓";
        }
        std::cout << std::endl;
        for (int j = 0; j < Board::size; j++) {
            std::cout << "┃ " << Board::spaces.at(size*i+j).getSymbol() << " ┃";
        }
        std::cout << std::endl;
        for (int j = 0; j < Board::size; j++) {
            std::cout << "┗━━━┛";
        }
        std::cout << std::endl;
    }
}

/*
Box drawing

┏━━━┓
┃ x ┃
┗━━━┛
┏━━━┓
┃ x ┃
┗━━━┛





*/