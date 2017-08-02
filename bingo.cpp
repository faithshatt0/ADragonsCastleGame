#include "bingo.h"
#include <ctime>
#include <time.h>
#include "windows.h"



Bingo::Bingo(){
   for(int r =0; r<3; r++){
        for(int c = 0; c<3; c++){
            board[r][c] = '*';
        }
   }

     turn = 1;
      row = 0 ;
        col = 0;

     letter = 'i';
      token = ' ';
     isRowValid= true;
      isLetterValid = true;
       isAvailable = true;
}

void Bingo::init(char b[][COLS]){
for(int r=0; r<ROWS; r++){
        for(int c=0; c<COLS; c++){
            b[r][c] = '*';
        }
    }


}
void Bingo::print(char b[][COLS]){
     cout << "  A   B   C" << endl;
    for(int r=0; r<ROWS; r++){
        cout << r+1 << " ";
        for(int c=0; c<COLS; c++){
            cout << b[r][c] << " | ";
        }
        cout << endl;
    }
}
bool Bingo::validateRows(int row){
    bool valid = false;
    if(row >= 1 && row <=3){
        valid = true;
    }
    return valid;

}
bool Bingo::validateLetters(char letter){
    bool valid = false;
    if(tolower(letter) >= 'a' && tolower(letter) <='c'){
        valid = true;
    }
    return valid;
}
bool Bingo::available(char b[][COLS], int row, char letter, int& col){
 bool isAvailable = false;

    if(tolower(letter) == 'a'){
        col = 0;
    } else if (tolower(letter) == 'b'){
        col = 1;
    } else if (tolower(letter) == 'c'){
        col = 2;
    }
    else{
        cout << "Bad input." << endl;
    }

    if(b[row-1][col] == '*'){
        isAvailable = true;
    }
    return isAvailable;
}
bool Bingo::winner(char b[][COLS]){

// Checking for rows
    for(int r = 0; r < ROWS; r++){
        if(b[r][0] == b[r][1] &&
            b[r][1] == b[r][2]){
                if(b[r][0] == 'X'){
                    return true;
                }
                if(b[r][0] == '0'){
                    return true;
                }
            }
    }
// Checking for columns
    for(int c = 0; c < COLS; c++){
        if(b[0][c] == b[1][c] &&
            b[1][c] == b[2][c]){
                if(b[0][c] == 'X'){
                    return true;
                }
                if(b[0][c] == '0'){
                    return true;
                }
            }
    }

    // Checking for diagonals
    if(b[0][0] == b[1][1] &&
        b[1][1] == b[2][2]){
            if(b[0][0] == 'X' || b[0][0] == '0'){
                return true;
            }
        }

    if(b[0][2] == b[1][1] &&
        b[1][1] == b[2][0]){
            if(b[0][2] == 'X' || b[0][2] == '0'){
                return true;
            }
        }

    return false;
}
bool Bingo::ties(int counter){
    return (counter == 9);
}


void Bingo::playGame(){


    do{
        print(board);
        do{
            if(turn % 2 == 1)
            {
                cout << "Player 1. You will be X. The computer is O." << endl;
                token = 'X';

                cout << "Enter coordinates (number and letter): ";
                cin >> row >> letter;

                isRowValid = validateRows(row);
                isLetterValid = validateLetters(letter);

                while(isRowValid == false || isLetterValid == false)
                {
                    cout << "Bad input. Please enter coordinates: ";
                    cin >> row >> letter;

                    isRowValid = validateRows(row);
                    isLetterValid = validateLetters(letter);
                }

                if(isRowValid == true && isLetterValid == true){
                    isAvailable = available(board, row, letter, col);
                }

                if(isRowValid == false){
                    cout << "Out of range error. Invalid row." << endl;
                }

                if(isLetterValid == false){
                    cout << "Out of range error. Invalid letter." << endl;
                }

                if(isAvailable == false){
                    cout << "Error. Box already taken." << endl;
                }
            }
            else
            {

                token = 'O';

                srand (time(NULL));
                row = (rand()% 3 + 1);
                srand (time(NULL));
                col = (rand()% 3 + 1);

                switch(col){
                    case 1:
                        letter = 'a';
                        break;
                    case 2:
                        letter = 'b';
                        break;
                    case 3:
                        letter = 'c';
                        break;
                    default:
                        break;
                }

            isRowValid = validateRows(row);
            isLetterValid = validateLetters(letter);

            if(isRowValid == true && isLetterValid == true){
                isAvailable = available(board, row, letter, col);
            }
            else
            {

            }

            if(isRowValid == false){
                //cout << "Out of range error. Invalid row." << endl;
            }

            if(isLetterValid == false){
                //cout << "Out of range error. Invalid letter." << endl;
            }

            if(isAvailable == false){
               // cout << "Error. Box already taken." << endl;
            }

            }


        } while (isRowValid == false || isLetterValid == false
                 || isAvailable == false);

        system("CLS");

        board[row-1][col] = token;

        turn++;

    } while (winner(board) == false);
 //|| ties(turn) == false


}
