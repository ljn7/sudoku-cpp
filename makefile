CXX = gcc
LFLAG = -static
SRCS = sudoku.cpp src\functions\checkColumn.cpp src\functions\checkRow.cpp src\functions\gameLogic.cpp src\functions\showBoard.cpp src\functions\sudokuCtorDtor.cpp src\functions\userInput.cpp
OUTPUTNAME = sudoku.exe

all:
	$(CXX) $(CFLAGS) -o $(OUTPUTNAME) $(SRCS) $(LFLAGS)