#ifndef solver_h
#define solver_h

#include "turn.h"
#include "board.h"
#include "piece.h"
#include "pawn.h"
#include "queen.h"
#include <algorithm>
#include <vector>
#include <cassert>
#include <random>
#include <unordered_map>
#include <iostream> // For debugging
using namespace std;

class Solver {
    private:
        int difficulty;
        Turn solve(Board &board, int depth, double ALPHA, double BETA, int color);
        double distance(Coordinate coord);
        bool canPromote(Piece* piece);
        static unordered_map<char, double> pieceWeight;
        // Random number generator
        static random_device m_rd;
        static mt19937 m_rng;
        static uniform_int_distribution<int> rng;
    public:
        static const int INF = 1e7;
        Solver(int);
        double evaluate(Board &board);
        Turn nextMove(Board &board, int colour);
        vector<Turn> genMoves(Board &board, int color);
        static int randRange(int low, int high);
};

#endif
