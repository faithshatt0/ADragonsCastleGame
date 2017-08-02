#ifndef HANGMAN_H
#define HANGMAN_H

#include <iostream>
using namespace std;

class Hangman
{
    private:
        int MaxWrong;
    public:
        Hangman();
        void play(bool win);
};

#endif // HANGMAN_H
