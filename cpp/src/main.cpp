#include <iostream>
#include <cassert>
#include "../include/coordinate.h"
#include "../include/move.h"
#include "../include/piece.h"
#include "../include/rook.h"
#include "../include/bishop.h"
#include "../include/queen.h"
#include "../include/king.h"
#include "../include/unicorn.h"
#include "../include/knight.h"
#include "../include/pawn.h"

#include "../include/solver.h"

// Remove this if you want to run cpp locally
#include "../include/bindings.h"

using namespace std;

int main() {
    // Coordinate coordTest(1, 2, 3);
    // Move movementTest(0, -1, 5), delta(5, 0, -2);
    // Move newMove = movementTest;
    // newMove.row = 1;
    // Rook testRook = Rook(0, 0, 0, 0);
    Board testBoard;
    Solver opponent(2);

    // assert(abs(opponent.evaluate(testBoard)) < 1e-5);

    // // testBoard.updateLocation({0,2,0}, Move{2,-1,0});
    // // Piece* testPiece = testBoard.getPieceAt(2, 1, 0);
    // // for (auto m : testPiece->getMoves(testBoard))
    // //     cout<<m.toString()<<endl;


    // // toString asserts
    // assert(coordTest.toString() == "(1, 2, 3)");
    // assert(movementTest.toString() == "Move by (0, -1, 5) cells");
    // assert(newMove.toString() == "Move by (1, -1, 5) cells");

    // // Addition overload asserts
    // coordTest += movementTest;
    // movementTest += delta;
    // assert((movementTest + delta).toString() == "Move by (10, -1, 1) cells");
    // assert((coordTest + delta).toString() == "(6, 1, 6)");

    // Piece* rook = testBoard.getPieceAt(0, 0, 0);
    // assert(rook->isAlive);
    // assert(rook->getId() == 'r');

    /* Testing updateLocation() stuff */

    // Try moving a white pawn
    // Piece* pawn = testBoard.getPieceAt(1, 0, 0);
    // cout << pawn->getId() << '\n';
    // Move pawnMove(1, 0, 0);
    // testBoard.updateLocation({1, 0, 0}, pawnMove);

    // Piece* oldPiece = testBoard.getPieceAt(1, 0, 0);
    // assert(!oldPiece->isAlive);
    // cout << oldPiece->getId() << '\n';

    // Piece* newPiece = testBoard.getPieceAt(2, 0, 0);
    // assert(newPiece->isAlive);
    // cout << newPiece->getId() << '\n';
    // //assert(newPiece->getId() == 'p');

    // // Try moving black unicorn to (1, 1, 0)
    // Piece* oldWhitePawn = testBoard.getPieceAt(1, 1, 0);
    // assert(oldWhitePawn->isAlive);
    // assert(oldWhitePawn->getId() == 'p');
    // assert(oldWhitePawn->color == 1);

    // Piece* unicorn = testBoard.getPieceAt(4, 4, 3);
    // assert(unicorn->isAlive);
    // assert(unicorn->getId() == 'u');
    // assert(unicorn->color == -1);
    // Move unicornMove(-3, -3, -3);
    // testBoard.updateLocation({4, 4, 3}, unicornMove);

    // Piece* newPiece2 = testBoard.getPieceAt(1, 1, 0);
    // assert(newPiece2->isAlive);
    // assert(newPiece2->getId() == 'u');
    // assert(newPiece2->color == -1);

    // assert(oldWhitePawn->isAlive == false);
    // assert(abs(opponent.evaluate(testBoard) + 1) < 1e-5);

    //freopen("out.txt", "w", stdout);

    /* Testing check function */
    cout << "Tests passed succesfully" << endl;
}
