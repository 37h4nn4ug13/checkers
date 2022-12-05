#include "board.h" 

Board::Board(const int &size) {
    Board::size = size;
    Checker x = Checker(1);
    Checker y = Checker(2);
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
bool Board::move(const int &start, const int &end, const char &player) { // Will return false if move is invalid. 
    // Check is start is valid
    if (start % 2 == 0) {
        return false;
    }
    
    // Check if end is valid
    if (end % 2 == 0) {
        return false;
    }

    // Check if user can move the piece
    if (Board::spaces.at(start).getSymbol() != player) {
        return false;
    }

    // Check if move is back and only let move happen if the piece is crowned


    // Check for pieces jumped. 

        // make sure pieces being jumped are not the players pieces
    
    // Check for doubles

    Board::spaces.at(end) = Board::spaces.at(start);
    Board::spaces.at(start) = Checker(0);
    return true;
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