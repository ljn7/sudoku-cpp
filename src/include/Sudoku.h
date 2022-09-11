#pragma once

class Sudoku {
    public:
        int **board;
        const int boardSize;

        Sudoku();
        bool checkColumn();
        bool checkRow();
        void showBoard();
        void userInput();
        bool gameLogic();
        ~Sudoku();
        
};