#ifndef board_h
#define board_h

#include "piece.h"
#include "coordinate.h"
#include "move.h"
using namespace std;

class Piece;

class Board {
    private:
        Piece board[5][5][5];
        // map<string, bool> whitePieces; // dead or alive white pieces
        // map<string, bool> blackPieces; // the like for black pieces
    public:
        Board();
        Piece getPieceAt(Coordinate square);
        Piece getPieceAt(int row, int col, int lvl);
        void updateLocation(Coordinate square, Move movement);
        string getGameState();

        bool isVacant(Coordinate cord); // returns true if cord is vacant
        bool isOnBoard(Coordinate cord); // return true if cord is on board


};

#endif
