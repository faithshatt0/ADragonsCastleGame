#ifndef BINGO_H_INCLUDED
#define BINGO_H_INCLUDED
#include <cstdlib>
#include <iostream>
using namespace std;

    const int ROWS = 3;
    const int COLS = 3;

class Bingo{
protected:
    int turn = 1, row, col;
    char board[ROWS][COLS];
    char letter, token;
    bool isRowValid, isLetterValid, isAvailable;

public:
    Bingo();
    void init(char b[][COLS]);
    void print(char b[][COLS]);
    bool validateRows(int row);
    bool validateLetters(char letter);
    bool available(char b[][COLS], int row, char letter, int& col);
    bool winner(char b[][COLS]);
    bool ties(int counter);

    void playGame();


};

#endif // BINGO_H_INCLUDED
