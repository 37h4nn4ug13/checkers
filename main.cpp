#include "board.h" 
using namespace std;

int main() {
    Board board = Board(8);
    board.printBoard();

    cout << "Wecome to Checkers. " << endl;
    int turn = 0;
    while(true) {
        if (turn % 2 == 0) {
            cout << "Player 1, Enter a move: ";
            break;
        }
        
    }
    
}