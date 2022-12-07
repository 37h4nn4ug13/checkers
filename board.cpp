#include "board.h" 
#include  <iomanip>

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

void Board::printBoard() {
    int index = 0;
    for (int i = 0; i < Board::size; i++) {
        
        for (int j = 0; j < Board::size; j++) {
            printf("┏━%d%s┓", index, index >= 10 ? "" : "━");
            index++;
        }
        std::cout << std::endl;
        for (int j = 0; j < Board::size; j++) {
            // std::cout << "┃ \033[0;31m" << Board::spaces.at(size*i+j).getSymbol() << "\033[0m ┃";
            std::cout << "┃ \033[1;3" << (char)((Board::spaces.at(size*i+j).getSymbol() == 'X') + '1') << "m" << Board::spaces.at(size*i+j).getSymbol() << "\033[0m ┃";
        }
        std::cout << std::endl;
        for (int j = 0; j < Board::size; j++) {
            std::cout << "┗━━━┛";
        }
        std::cout << std::endl;
    }
    // (void)index;
}
bool Board::move(const int &start, const int &end, const char &player) { // Will return false if move is invalid. 
    // Check is start is valid
    if (!(((start / Board::size)%2==0 && start % 2 == 1) || ((start / Board::size) % 2 == 1 && start % 2 == 0))) {
        return false;
    }
    
    
    // // Check if end is valid
    if (!(((end / Board::size)%2==0 && end % 2 == 1) || ((end / Board::size) % 2 == 1 && end % 2 == 0))) {
        return false;
    }
    // make sure you don't land on another piece
    if (Board::spaces.at(end).getSymbol() != Checker(0).getSymbol()) {
        return false;
    }

    // // Check if user can move the piece
    if (Board::spaces.at(start).getSymbol() != player) {
        return false;
    }

    

    if (player == 'X') {
        if (!Board::spaces.at(start).checkIsCrowned()) {
            if (start > end) {
                return false;
            }
        }
    }
    else if (player == 'O') {
        if (!Board::spaces.at(start).checkIsCrowned()) {
            if (end > start) {
                return false;
            }
        }
    } 
    else {
        std::cerr << "Invalid function input. Player value of " << player <<  " is invalid. " << std::endl;
        return false;
    }

    // Check if move is back and only let move happen if the piece is crowned


    // Check for pieces jumped. 

        // make sure pieces being jumped are not the players pieces
    
    // Check for doubles
    if (
        ((end == start + Board::size + 1 || end == start + Board::size - 1) || (start == end + Board::size + 1 || start == end + Board::size - 1)) ||
        ((end == start + 2 * Board::size + 2 || end == start + 2 * Board::size - 2) || (start == end + 2 * Board::size + 2 || start == end + 2 * Board::size - 2))
        ) { 
            if (((end - start) > Board::size + 1) || ((start - end) > Board::size + 1)) {
                // Condition for checking if there is a checker of the opposite player between start and end;
                
            }
        // only allows pieces the move as far as they should. This also needs the jump logic. 
        std::cout << player << std::endl;
        Board::spaces.at(end) = Board::spaces.at(start);
        Board::spaces.at(start) = Checker(0);
        return true;
    }
    return false;
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
