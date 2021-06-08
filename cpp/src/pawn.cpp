#include "../include/pawn.h"

char Pawn::getId() {
    return 'p';
}

vector<Move> Pawn::getMoves(Board board) {

    vector<Move> moves;

    // vector of moves that must capture a piece
    vector<Move> captureMoves = {
        Move((color==WHITE ? 1 : -1), 1, 0),
        Move((color==WHITE ? 1 : -1), -1, 0),
        Move((color==WHITE ? 1 : -1), 1, (color==WHITE ? 1 : -1)),
        Move((color==WHITE ? 1 : -1), -1, (color==WHITE ? 1 : -1))
    }; 
    
    // vector of moves that move into an empty cord
    vector<Move> passiveMoves = {
        Move((color==WHITE ? 1 : -1), 0, 0), 
        Move(0, 0, (color==WHITE ? 1 : -1))
    }; 

    for (auto m : passiveMoves) {
        // get the coordinate if the piece were to make a passive move
        Coordinate potCord = Coordinate(location, m);
        
        // this move can only be made if cell is empty
        if (board.isVacant(potCord)) moves.push_back(m);
    }

    for (auto m : captureMoves) {
        // get the coordinate if the piece were to make a passive move
        Coordinate potCord = Coordinate(location, m);
        
        // this move can only be made if cell contains an ENEMY piece
        if (board.isEnemySquare(potCord, color)) moves.push_back(m);
    }

    return moves;
}

void Pawn::Promote() {
    /*
    
    replace this piece with any piece the user picks
    perhaps this method should be in the board class ??

    */
}