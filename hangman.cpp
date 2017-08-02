#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <ctime>
#include "hangman.h"
#include <sstream>

using namespace std;

Hangman::Hangman()
{
    int MaxWrong = 6;
}

void Hangman::play(bool win)
{
    int MaxWrong = 6;
    char guess;
    int i = 0;

    system("color 8E");


    string words[2] = {"CASTLE", "DRAGON"};

    srand(static_cast<unsigned int>(time(0)));

    string theWord = words[rand()%2]; //HELLO

    int wrong = 0;

    bool isFound = false;

    string soFar(theWord.length(), '_');

    char used[6] = {' ',' ',' ',' ',' ',' '};

    //Title Screen

    cout << "*********Guess the correct letters to reveal the map*********\n";
    cout << "********************Before it closes!************************\n";

    cout <<"        ___________________________________________________________ " << endl;
    cout <<"                                                                    " << endl;
    cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
    cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
    cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
    cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
    cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
    cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
    cout <<"    __________________________________________________________________      " << endl;
    cout <<"        |                                        .-.              |         " << endl;
    cout <<"        |                                       {{@}}             |" << endl;
    cout <<"        |                     <>                 8@8              |" << endl;
    cout <<"        |                   .::::.               888              |" << endl;
    cout <<"        |               @\\/W\/\/W\//@@              8@8              |" << endl;
    cout <<"        |                \\/^\/\/^\//                )8(              |" << endl;
    cout <<"        |                 \_O_<>_O_/         (@)__/8@8\__(@)        |" << endl;
    cout <<"        |                                    `~'-=):(=-'~`         |" << endl;
    cout <<"        |           |<><><>  |  |  <><><>|        |.|              |" << endl;
    cout <<"        |           |<>      |  |      <>|        |||              |" << endl;
    cout <<"        |           |<>      |  |      <>|        |'|              |" << endl;
    cout <<"        |           |<>   .--------.   <>|        |.|              |" << endl;
    cout <<"        |           |     |   ()   |     |        |||              |" << endl;
    cout <<"        |           |_____| (O\/O) |_____|         | |              |" << endl;
    cout <<"        |           |     \   /\   /     |          | |              |" << endl;
    cout <<"        |           |------   \/  /------|         | |              |" << endl;
    cout <<"        |           |       '.__.'       |        | |              |" << endl;
    cout <<"        |           |        |  |        |        | |              |" << endl;
    cout <<"        |           :        |  |        :        | |              |" << endl;
    cout <<"        |            \<>     |  |     <>/          | |              |" << endl;
    cout <<"        |             \<>    |  |    <>/           |.|              |" << endl;
    cout <<"        |               `\<> |  | <>/'             |'|              |" << endl;
    cout <<"        |                 `-.|  |.-`              \\|/              |" << endl;
    cout <<"        |                    '--'                  .               |" << endl;
    cout <<"        |                                                         |" << endl;
    cout <<"        /                                                         /" << endl;
    cout <<"       /                                                         /" << endl;
    cout <<"      /                                                         /" << endl;
    cout <<"     /                                                         /" << endl;
    cout <<"  __/                                                         /" << endl;
    cout <<"====(_ /_________________________________________________________)======" << endl << endl;

    cout <<" GOOD LUCK" << endl;

    while(( wrong < MaxWrong) && (soFar != theWord))
    {
        isFound = false;
        cout << "\n You have " << (MaxWrong - wrong) << " tries left." << endl;

        cout << "\n Letter's you've guessed: ";

        for(int i = 0; i < 6; i++)
        {
            if(used[i] != ' ')
                cout << used[i];
        }

        cout << endl;

        for(int i = 0; i < theWord.length(); i++)
        {
            cout << soFar[i] << " ";
        }

        cout << "\n\n Enter your guess: ";
        cin  >> guess;
        guess = toupper(guess);

        for(int x = 0; x < MaxWrong; x++)
        {
            while(used[x] == guess)
            {
                cout << "\n You've already tried " << guess << endl;
                cout << " Enter your guess: ";
                cin  >> guess;
                guess = toupper(guess);
            }
        }

        //searches through word
        for(int i = 0; i < theWord.length(); i++)
        {
            //if letter is in word
            if(theWord[i] == guess)
            {
                system("cls");
                cout << "That's correct. " << guess <<" is in the word, \n";
                soFar[i] = guess;
                isFound = true;
            }
        }

        //if letter is never found
        if(isFound == false)
        {
            system("cls");
            cout << "Sorry, " << guess << " isn't in the word. " << endl;
            used[i] = guess;
            wrong++;
        }

        if(wrong == 0)
        {
            cout <<"        ___________________________________________________________ " << endl;
            cout <<"                                                                    " << endl;
            cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
            cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
            cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
            cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
            cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
            cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
            cout <<"    __________________________________________________________________      " << endl;
            cout <<"        |                                        .-.              |         " << endl;
            cout <<"        |                                       {{@}}             |" << endl;
            cout <<"        |                     <>                 8@8              |" << endl;
            cout <<"        |                   .::::.               888              |" << endl;
            cout <<"        |               @\\/W\/\/W\//@@              8@8              |" << endl;
            cout <<"        |                \\/^\/\/^\//                )8(              |" << endl;
            cout <<"        |                 \_O_<>_O_/         (@)__/8@8\__(@)        |" << endl;
            cout <<"        |                                    `~'-=):(=-'~`         |" << endl;
            cout <<"        |           |<><><>  |  |  <><><>|        |.|              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |||              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |'|              |" << endl;
            cout <<"        |           |<>   .--------.   <>|        |.|              |" << endl;
            cout <<"        |           |     |   ()   |     |        |||              |" << endl;
            cout <<"        |           |_____| (O\/O) |_____|         | |              |" << endl;
            cout <<"        |           |     \   /\   /     |          | |              |" << endl;
            cout <<"        |           |------   \/  /------|         | |              |" << endl;
            cout <<"        |           |       '.__.'       |        | |              |" << endl;
            cout <<"        |           |        |  |        |        | |              |" << endl;
            cout <<"        |           :        |  |        :        | |              |" << endl;
            cout <<"        |            \<>     |  |     <>/          | |              |" << endl;
            cout <<"        |             \<>    |  |    <>/           |.|              |" << endl;
            cout <<"        |               `\<> |  | <>/'             |'|              |" << endl;
            cout <<"        |                 `-.|  |.-`              \\|/              |" << endl;
            cout <<"        |                    '--'                  .               |" << endl;
            cout <<"        |                                                         |" << endl;
            cout <<"        /                                                         /" << endl;
            cout <<"       /                                                         /" << endl;
            cout <<"      /                                                         /" << endl;
            cout <<"     /                                                         /" << endl;
            cout <<"  __/                                                         /" << endl;
            cout <<"====(_ /_________________________________________________________)======" << endl << endl;

        }
        else if(wrong == 1)
        {
            cout <<"        ___________________________________________________________ " << endl;
            cout <<"                                                                    " << endl;
            cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
            cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
            cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
            cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
            cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
            cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
            cout <<"    __________________________________________________________________      " << endl;
            cout <<"        |                                        .-.              |         " << endl;
            cout <<"        |                                       {{@}}             |" << endl;
            cout <<"        |                     <>                 8@8              |" << endl;
            cout <<"        |                   .::::.               888              |" << endl;
            cout <<"        |               @\\/W\/\/W\//@@              8@8              |" << endl;
            cout <<"        |                \\/^\/\/^\//                )8(              |" << endl;
            cout <<"        |                 \_O_<>_O_/         (@)__/8@8\__(@)        |" << endl;
            cout <<"        |                                    `~'-=):(=-'~`         |" << endl;
            cout <<"        |           |<><><>  |  |  <><><>|        |.|              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |||              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |'|              |" << endl;
            cout <<"        |           |<>   .--------.   <>|        |.|              |" << endl;
            cout <<"        |           |     |   ()   |     |        |||              |" << endl;
            cout <<"        |           |_____| (O\/O) |_____|         | |              |" << endl;
            cout <<"        |           |     \   /\   /     |          | |              |" << endl;
            cout <<"        |           |------   \/  /------|         | |              |" << endl;
            cout <<"        |           |       '.__.'       |        | |              |" << endl;
            cout <<"        |           |        |  |        |        | |              |" << endl;
            cout <<"        |           :        |  |        :        | |              |" << endl;
            cout <<"        |            \<>     |  |     <>/          | |              |" << endl;
            cout <<"        |             \<>    |  |    <>/           |.|              |" << endl;
            cout <<"        |               `\<> |  | <>/'             |'|              |" << endl;
            cout <<"        /                                                         /" << endl;
            cout <<"       /                                                         /" << endl;
            cout <<"      /                                                         /" << endl;
            cout <<"     /                                                         /" << endl;
            cout <<"  __/                                                         /" << endl;
            cout <<"====(_ /_________________________________________________________)======" << endl << endl;

        }

        else if(wrong == 2)
        {
            cout <<"        ___________________________________________________________ " << endl;
            cout <<"                                                                    " << endl;
            cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
            cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
            cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
            cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
            cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
            cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
            cout <<"    __________________________________________________________________      " << endl;
            cout <<"        |                                        .-.              |         " << endl;
            cout <<"        |                                       {{@}}             |" << endl;
            cout <<"        |                     <>                 8@8              |" << endl;
            cout <<"        |                   .::::.               888              |" << endl;
            cout <<"        |               @\\/W\/\/W\//@@              8@8              |" << endl;
            cout <<"        |                \\/^\/\/^\//                )8(              |" << endl;
            cout <<"        |                 \_O_<>_O_/         (@)__/8@8\__(@)        |" << endl;
            cout <<"        |                                    `~'-=):(=-'~`         |" << endl;
            cout <<"        |           |<><><>  |  |  <><><>|        |.|              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |||              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |'|              |" << endl;
            cout <<"        |           |<>   .--------.   <>|        |.|              |" << endl;
            cout <<"        |           |     |   ()   |     |        |||              |" << endl;
            cout <<"        |           |_____| (O\/O) |_____|         | |              |" << endl;
            cout <<"        |           |     \   /\   /     |          | |              |" << endl;
            cout <<"        |           |------   \/  /------|         | |              |" << endl;
            cout <<"        |           |       '.__.'       |        | |              |" << endl;
            cout <<"        |           |        |  |        |        | |              |" << endl;
            cout <<"        |           :        |  |        :        | |              |" << endl;
            cout <<"        /                                                         /" << endl;
            cout <<"       /                                                         /" << endl;
            cout <<"      /                                                         /" << endl;
            cout <<"     /                                                         /" << endl;
            cout <<"  __/                                                         /" << endl;
            cout <<"====(_ /_________________________________________________________)======" << endl << endl;

        }
        else if(wrong == 3)
        {
            cout <<"        ___________________________________________________________ " << endl;
            cout <<"                                                                    " << endl;
            cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
            cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
            cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
            cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
            cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
            cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
            cout <<"    __________________________________________________________________      " << endl;
            cout <<"        |                                        .-.              |         " << endl;
            cout <<"        |                                       {{@}}             |" << endl;
            cout <<"        |                     <>                 8@8              |" << endl;
            cout <<"        |                   .::::.               888              |" << endl;
            cout <<"        |               @\\/W\/\/W\//@@              8@8              |" << endl;
            cout <<"        |                \\/^\/\/^\//                )8(              |" << endl;
            cout <<"        |                 \_O_<>_O_/         (@)__/8@8\__(@)        |" << endl;
            cout <<"        |                                    `~'-=):(=-'~`         |" << endl;
            cout <<"        |           |<><><>  |  |  <><><>|        |.|              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |||              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |'|              |" << endl;
            cout <<"        |           |<>   .--------.   <>|        |.|              |" << endl;
            cout <<"        |           |     |   ()   |     |        |||              |" << endl;
            cout <<"        |           |_____| (O\/O) |_____|         | |              |" << endl;
            cout <<"        |           |     \   /\   /     |          | |              |" << endl;
            cout <<"        |                                                         |" << endl;
            cout <<"        /                                                         /" << endl;
            cout <<"       /                                                         /" << endl;
            cout <<"      /                                                         /" << endl;
            cout <<"     /                                                         /" << endl;
            cout <<"  __/                                                         /" << endl;
            cout <<"====(_ /_________________________________________________________)======" << endl << endl;

        }
        else if(wrong == 4)
        {
            cout <<"        ___________________________________________________________ " << endl;
            cout <<"                                                                    " << endl;
            cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
            cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
            cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
            cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
            cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
            cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
            cout <<"    __________________________________________________________________      " << endl;
            cout <<"        |                                        .-.              |         " << endl;
            cout <<"        |                                       {{@}}             |" << endl;
            cout <<"        |                     <>                 8@8              |" << endl;
            cout <<"        |                   .::::.               888              |" << endl;
            cout <<"        |               @\\/W\/\/W\//@@              8@8              |" << endl;
            cout <<"        |                \\/^\/\/^\//                )8(              |" << endl;
            cout <<"        |                 \_O_<>_O_/         (@)__/8@8\__(@)        |" << endl;
            cout <<"        |                                    `~'-=):(=-'~`         |" << endl;
            cout <<"        |           |<><><>  |  |  <><><>|        |.|              |" << endl;
            cout <<"        |           |<>      |  |      <>|        |||              |" << endl;
            cout <<"       /                                                         /" << endl;
            cout <<"      /                                                         /" << endl;
            cout <<"     /                                                         /" << endl;
            cout <<"  __/                                                         /" << endl;
            cout <<"====(_ /_________________________________________________________)======" << endl << endl;

        }
        else if(wrong == 5)
        {
            cout <<"        ___________________________________________________________ " << endl;
            cout <<"                                                                    " << endl;
            cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
            cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
            cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
            cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
            cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
            cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
            cout <<"    __________________________________________________________________      " << endl;
            cout <<"        |                                        .-.              |         " << endl;
            cout <<"        |                                       {{@}}             |" << endl;
            cout <<"        |                     <>                 8@8              |" << endl;
            cout <<"        |                   .::::.               888              |" << endl;
            cout <<"        |               @\\/W\/\/W\//@@              8@8              |" << endl;
            cout <<"        |                \\/^\/\/^\//                )8(              |" << endl;
            cout <<"        |                 \_O_<>_O_/         (@)__/8@8\__(@)        |" << endl;
            cout <<"        |                                    `~'-=):(=-'~`         |" << endl;
            cout <<"        |                                                         |" << endl;
            cout <<"        /                                                         /" << endl;
            cout <<"       /                                                         /" << endl;
            cout <<"      /                                                         /" << endl;
            cout <<"     /                                                         /" << endl;
            cout <<"  __/                                                         /" << endl;
            cout <<"====(_ /_________________________________________________________)======" << endl << endl;

        }
        else if(wrong == MaxWrong)
        {
            cout << " You lost! :'(";
            cout << endl;

            cout <<"        ___________________________________________________________ " << endl;
            cout <<"                                                                    " << endl;
            cout <<"        #####     ###   ###   #    # ####  #       ##   ####  #####     " << endl;
            cout <<"====(   #     # #    # #    # ##  ## #   # #      #  #  #   # #    )====    " << endl;
            cout <<"        #     # #    # #    # # ## # ####  #     #    # #   # ####              " << endl;
            cout <<"====(  	#     # #    # #    # #    # #   # #     ###### #   # #    )====        " << endl;
            cout <<"        #     # #    # #    # #    # #   # #     #    # #   # #             " << endl;
            cout <<"        ######   ###    ####  #    # ####  ##### #    # ####  #####         " << endl;
            cout <<"    __________________________________________________________________      " << endl;
            cout <<"       /                                                         /" << endl;
            cout <<"      /                                                         /" << endl;
            cout <<"     /                                                         /" << endl;
            cout <<"  __/                                                         /" << endl;
            cout <<"====(_ /_________________________________________________________)======" << endl << endl;


            cout << endl;
            system("cls");

        }
        else
        {
            cout << " You got it!!!" << endl;
        }
    }

    cout << endl << " The word was " << theWord << endl;

}
