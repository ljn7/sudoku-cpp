#include <iostream>
#include "../include/Sudoku.h"   

Sudoku::Sudoku() : boardSize(9) {
    board = new int*[boardSize];

    for (int i = 0; i < boardSize; i++) 
        board[i] = new int[9];
}

Sudoku::~Sudoku() {

    for (int i = 0; i < boardSize; i++) 
        delete[] board[i];
    
    delete[] board;
}