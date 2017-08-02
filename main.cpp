//main.cpp
//Dreamland

#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "hangman.h"
#include "bingo.h"
#include "combat.h"

using namespace std;

void dragon();
void revealNote(string name, string friend_name, string place);
void pressContinue();
void displayScreen(const char* text);
void showImage(const char* fileName);
void showFinalImage(const char* fileName);

int main()
{
    string name = "Faith";
    string place = "deep within the African continent";
    string friend_name = "Jarvin";
    char viewNote = 'Y';
    int numOfGames = 2;
    char* text = "Hello!";
    char* fileName;
    bool isName = false;
    char gender = 'i';

    system("color 70");

    while(isName == false)
    {
        char answer = 'a';
        cout << "Hello! Please enter your name: ";
        getline(cin, name);

        cout << "Your name is " << name << ", is that correct? (y/n) ";
        cin >> answer;
        cin.ignore();

        if(toupper(answer) == 'Y')
            system("cls");
            cout << endl << "Welcome " << name << "!" << endl << endl;
            isName = true;
    }

    cout << "Please choose a character from the next display." << endl;
    pressContinue();

    showImage("encounters/girlboy.bmp");

    cout << "Please choose a character. (m/f) ";
    cin >> gender;

    while(toupper(gender) != 'F' && toupper(gender) != 'M')
    {
        cout << "Bad input. Choose a character. (m/f)";
        cin >> gender;
    }

    pressContinue();

    cout << "------------------------------------------------Story Begins----------------------------------------------" << endl;
    cout << "Teacher: \" Today we will be going over Big O notation. I hope you're all very excited.\"" << endl << endl;

    pressContinue();

    cout << "*You suddenly feel very tired. . . you begin to drift asleep.*" << endl;

    pressContinue();

    cout << endl << ">> . . . hm? Where am I? <<" << endl;
    cout << ">> I could've sworn I was just in class. . . <<" << endl << endl;
    pressContinue();

    //cloudy landscape
    showImage("encounters/cloudy.bmp");

    cout << endl << ">> ?! <<" << endl << endl;
    showImage("dragonforeshadow.bmp");

    system("cls");

    cout << "*You find yourself back in class. . .*" << endl << endl;
    cout << "Teacher: \" . . . so, that's how Big O notation is done. Now, we will go over some other kinds of notation. . . \"" << endl << endl;

    pressContinue();

    cout << endl << ">> . . . that was strange. <<" << endl << endl;

    pressContinue();

    cout << endl << ">> Must've been a dream. At least I'm back in class now. . . <<" << endl;
    cout << ">> I should probably pay attention anyways. <<" << endl << endl;

    pressContinue();

    cout << "> A dear friend of yours enters the room, what is their name? <" << endl;
    getline(cin, friend_name);
    cin.ignore();

    cout << friend_name << " hands you a note." << endl << endl;

    pressContinue();

    revealNote(name,friend_name, place);

    pressContinue();

    //game continues with player's dialogue
    cout << endl;
    cout << ">> I don't know what this means. . . <<" << endl << endl;

    pressContinue();

    cout << endl << friend_name << ": I have mastered time traveling.. I'd get into it \nbut there's no time for discussion! WE MUST GO NOW!" << endl << endl;

    pressContinue();

    system("cls");
    cout << friend_name << " takes you to a Time Machine" << endl;
    pressContinue();

    //traveling image
    showImage("encounters/timetravel.bmp");

    //mission one begins...
    cout << "!!! You have been tasked: " << friend_name << "'s Mission !!!" << endl << endl;

    pressContinue();

    cout << endl << friend_name << ": To sum things up, there's a ferocious beast awaiting your challenge. We must get there as soon as possible." << endl;

    pressContinue();

    cout << endl << ">> Where exactly are we going? << " << endl << endl;
    pressContinue();

    cout << endl << friend_name << ": Oh, err..." << endl << endl;
    pressContinue();

    cout << endl << friend_name << ": Well, I DO know that we must travel through the forest." << endl;
    cout << "Through the forest we go!" << endl << endl;
    pressContinue();

    cout << ">> *sigh...* <<" << endl;
    pressContinue();

    cout << "After several hours of walking with seemingly no set direction... you come across a traveling merchant. " << endl;
    pressContinue();

    showImage("encounters/fox1.bmp");

    cout << friend_name << ": Yes we are actually. " << name << " is the Chosen One!" << endl << endl;
    pressContinue();

    showImage("encounters/fox2.bmp");

    system("cls");

    cout << friend_name << ": You think we can trust this merchant? They knew we were searching for a dragon." << endl;
    pressContinue();

    cout << endl << ">> I don't think we have a choice... <<" << endl;
    pressContinue();

    int selection = 0;
    cout << friend_name << ": Okay, you're right. What do you think we should give her?" << endl << endl;
    cout << "Select an item from below: " << endl << endl;
    cout << "1) your computer mouse from class" << endl;
    cout << "2) fidget spinner" << endl;
    cout << "3) iPod" << endl;
    cin >> selection;
    cin.ignore();

    switch(selection)
    {
        case 1:
            cout << endl << "You give the merchant your $7 computer mouse. " << endl;
            pressContinue();
            break;
        case 2:
            cout << endl << "You give the merchant your bright red, limited edition fidget spinner." << endl;
            pressContinue();
            break;
        case 3:
            cout << endl << "You give the merchant your old iPod from middle school. " << endl;
            pressContinue();
            break;
        default:
            cout << endl << "You reach for an item from your bag, but you stumble and your Google Pixel falls from your pocket." << endl;
            pressContinue();
            break;
    }
    cout << "The merchant carefully examines the item." << endl << endl;
    pressContinue();

    showImage("encounters/fox3.bmp");

    system("cls");

    Hangman gameOne;

    cin.ignore();

    cout << "!!! Received Map from merchant !!!" << endl << endl;
    pressContinue();

    cout << friend_name << ": Alright, maybe this should give us some sense of direction." << endl;
    pressContinue();

    cout << "You must discover the hidden word to reveal the castle's location on the map!" << endl;
    cout << "The Scroll will shut closed if you don't guess correctly!" << endl;
    pressContinue();

    bool win = false;
    gameOne.play(win);
    system("color 70");

    cout << "You guessed the word correctly!!" << endl;

    showImage("encounters/map.bmp");

    pressContinue();

    cout << friend_name << ": There's the direction! Nice job! Let's continue to the castle! " << endl << endl;
    pressContinue();

    cout << "You and " << friend_name << " arrive at the dark and frightening castle." << endl << endl;
    pressContinue();

    cout << "You notice a giant, complex looking lock on the castle door. " << endl << endl;
    pressContinue();

    cout << friend_name << ": That angry spell caster must've left that there." << endl << endl;
    pressContinue();

    cout << friend_name << ": That's powerful magic, maybe you should try to decode it." << endl << endl;
    pressContinue();

    cout << "It seems as though the lock responds to your every move. Think wisely before making a choice!" << endl << endl;

    Bingo gameTwo;
    gameTwo.playGame();

    pressContinue();

    cout << endl << "*** You Unlocked the Door! ***" << endl;

    pressContinue();

    cout << endl << friend_name << ": Well done! I think the dragon is up ahead. I hope you're ready, " << name << endl << endl;

    pressContinue();

    showImage("encounters/foxcastle.bmp");

    char takeSword = 'Y';
    cout << "Would you like to take the sword? (y/n)";
    cin >> takeSword;

    if(toupper(takeSword) == 'Y')
        cout << "!!! Received Sword from merchant !!!" << endl;
    else if(toupper(takeSword) == 'N')
    {
        cout << endl << "You should probably take the sword..." << endl << endl;
        pressContinue();
        cout << "!!! Received Sword from merchant !!!" << endl;
    }
    else
    {
        cout << "That wasn't an option. But, here's the sword anyways" << endl << endl;
        pressContinue();
        cout << "!!! Received DoomBlade Sword from merchant !!!" << endl;
    }
    pressContinue();

    cout << "----------->>>>>>>> Enter the castle? <<<<<<<<-----------" << endl << endl;
    pressContinue();

    //Final Fight

    cout << "You enter the castle." << endl;
    pressContinue();

    showImage("encounters/introcastle.bmp");
    showImage("black.bmp");

    cout << "You suddenly hear a screech." << endl;
    pressContinue();

    //gender = 'f';

    if(toupper(gender) == 'F')
    {
        showFinalImage("encounters/ffight1.bmp");
        //SDL_Delay(3000);
        showImage("encounters/ffight2.bmp");
        //SDL_Delay(3000);
        showImage("encounters/ffight3.bmp");

        cout << "!!! Dragon Defeated !!!" << endl;
        pressContinue();

        showImage("encounters/ffightwin.bmp");
    }
    else if(toupper(gender) == 'M')
    {
        showFinalImage("encounters/mfight1.bmp");
        //showImage("black.bmp");
        showFinalImage("encounters/mfight1.bmp");
        //SDL_Delay(3000);
        showFinalImage("encounters/mfight2.bmp");
        //showImage("black.bmp");
        showFinalImage("encounters/mfight2.bmp");
        //SDL_Delay(3000);
        showFinalImage("encounters/mfight3.bmp");
        //showImage("black.bmp");
        showFinalImage("encounters/mfight3.bmp");

        cout << "!!! Dragon Defeated !!!" << endl;
        pressContinue();

        showFinalImage("encounters/mfight_win.bmp");
    }
    else
    {
        showFinalImage("encounters/mfight1.bmp");
        //showImage("black.bmp");
        showFinalImage("encounters/mfight1.bmp");
        //SDL_Delay(3000);
        showFinalImage("encounters/mfight2.bmp");
        //showImage("black.bmp");
        showFinalImage("encounters/mfight2.bmp");
        //SDL_Delay(3000);
        showFinalImage("encounters/mfight3.bmp");
        //showImage("black.bmp");
        showFinalImage("encounters/mfight3.bmp");

        cout << "!!! Dragon Defeated !!!" << endl;
        pressContinue();

        showFinalImage("encounters/mfight_win.bmp");
    }

    system("color 4C");

    cout << " You defeated the Dragon and saved the world! " << endl;
    cout << "                                     " << endl;
    cout << "                 //           //    " << endl;
    cout << "            ///' .,,,,  .//        " << endl;
    cout << "           ///';/'     ,//        " << endl;
    cout << "          // //   ,,////,`/'`          " << endl;
    cout << "         ( ,, /'_,  ,,,/' ``        " << endl;
    cout << "         |    //X  ,,, ;/' `        " << endl;
    cout << "        //    .   ,/'/'///' `,``       " << endl;
    cout << "       //   .     .//, `,, ` ;      " << endl;
    cout << "    ,.//  .   ,-,/',` ,,///'/'\,/'      " << endl;
    cout << "   |   //; .//,,/'`,,/'/'              " << endl;
    cout << "   |     //   /',/'                  " << endl;
    cout << "    \___///'   /'                    " << endl;
    cout << "      `,,/'                        " << endl;


    return 0;
}

void dragon()
{
    cout << "                 ,\'\   |\\" << endl;
    cout << "               / /.:  ;;" << endl;
    cout << "              / :\'|| //" << endl;
    cout << "             (| | ||;\'" << endl;
    cout << "             / ||,;\'-.._" << endl;
    cout << "            : ,;,`\';:.--`" << endl;
    cout << "            |:|\'`-(\\\\" << endl;
    cout << "            ::: \\-\'\\`\'" << endl;
    cout << "             \\\\\\ \\,-`." << endl;
    cout << "              `\'\\ `.,-`-._      ,-._" << endl;
    cout << "       ,-.       \\  `.,-\' `-.  / ,..`." << endl;
    cout << "      / ,.`.      `.  \\ _.-\' \\\',: ``\\ \\" << endl;
    cout << "     / / :..`-\'\'\'``-)  `.   _.:\'\'  \'\'\\ \\" << endl;
    cout << "    : :  \'\' `-..\'\'`/    |-\'\'  |\'\'  \'\' \\ \\" << endl;
    cout << "    | |  \'\'   \'\'  :     |__..-;\'\'  \'\'  : :" << endl;
    cout << "    | |  \'\'   \'\'  |     ;    / \'\'  \'\'  | |" << endl;
    cout << "    | |  \'\'   \'\'  ;    /--../_ \'\'_ \'\' _| |" << endl;
    cout << "    | |  \'\'  _;:_/    :._  /-.\'\',-.\'\',-. |" << endl;
    cout << "    : :  \'\',;\'`;/     |_ ,(   `\'   `\'   \\|" << endl;
    cout << "     \\ \\  \\(   /\\     :,\'  \\" << endl;
    cout << "      \\ \\.\'/  : /    ,)    /" << endl;
    cout << "       \\ \':   \':    / \   :" << endl;
    cout << "        `.\\    :   :\\  \\  |" << endl;
    cout << "                \\  | `. \\ |..-_" << endl;
    cout << "                 ) |.  `/___-.-`" << endl;
    cout << "               ,\'  -.\'.  `. `\'        _,)" << endl;
    cout << "               \\\'\\(`.\\ `._ `-..___..-\',\'" << endl;
    cout << "                  `\'      ``-..___..-\'" << endl;
}

void revealNote(string name, string friend_name, string place)
{
    char* text;
    text = "Dear Chosen one,                                                  "
           "Several moons ago, your friend, the time traveler, came to us seeking knowledge "
           "of our ways. Unfortunately, the traveler had explored too far and "
           "mistakenly upset a very powerful spell caster. A terrifying mass of "
           "power unleashed upon a cursed dungeon that jailed an even more powerful "
           "beast. In a time of great dragons and magic, a kingdom’s fate rests on your shoulders. "
           "You must come now! Acquire the knowledge and courage to face the beast, and slay it. "
           "Failure to do so will lay waste across our dominion.               "
           "                                                                   "
           "Great Luck to you voyager.";
    displayScreen(text);
}

void pressContinue()
{
    string ans;

    cout << "***Press enter to continue***";
    cin.get();

    system("cls");
}

#include <SDL.h>
#include <SDL_ttf.h>

void displayScreen(const char* text)
{
    bool quit = false;
    SDL_Event event;

    //Initializes SDL
    SDL_Init(SDL_INIT_VIDEO);

    //Initializes True Type Fonts
    TTF_Init();

    //Creates window title, position, size ...
    SDL_Window * window = SDL_CreateWindow("A Dragon's Wit",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640,480, 0);

    //Creates the renderer
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

    //Creates the font we will be using
    TTF_Font * font = TTF_OpenFont("Sans-regular.ttf", 25);

    //Colors the background
    SDL_Color color = { 255, 255, 255 };

    //Prints to screen
    SDL_Surface * surface = TTF_RenderText_Blended_Wrapped(font,text, color, 600);

    //Creates textures
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,surface);

    //Creates the text "destretcher"
    int texW = 0;
    int texH = 0;
    SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
    SDL_Rect dstrect = { 0, 0, texW, texH };

    //Main Loop... allows user to exit the window..
    while (!quit)
    {
        SDL_WaitEvent(&event);

        switch (event.type)
        {
            //user exits through 'X'
            case SDL_QUIT:
                quit = true;
                break;
            //user exits through key press
            case SDL_KEYDOWN:
                quit = true;

       break;
        }

        //Renders the text we want on the screen
        SDL_RenderCopy(renderer, texture, NULL, &dstrect);
        SDL_RenderPresent(renderer);
    }


    //Frees memory
    TTF_CloseFont(font);
    SDL_DestroyTexture(texture);
    SDL_FreeSurface(surface);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
}

void showImage(const char* fileName)
{
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window * window = SDL_CreateWindow("A Dragon's Wit",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    if (window == NULL)
        SDL_ShowSimpleMessageBox(0, "Window init error", SDL_GetError(),window);

    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer == NULL)
        SDL_ShowSimpleMessageBox(0, "Renderer init error",SDL_GetError(), window);

    SDL_Surface * image = SDL_LoadBMP(fileName);
    if (image == NULL)
        SDL_ShowSimpleMessageBox(0, "Image init error", SDL_GetError(),window);

    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,image);
    if (texture == NULL)
        SDL_ShowSimpleMessageBox(0, "Texture init error",
            SDL_GetError(), window);

    int width, height;
    SDL_QueryTexture(texture, NULL, NULL, &width, &height);

    int imgW = 432;
    int imgH = 432;
    SDL_QueryTexture(texture, NULL, NULL, &imgW, &imgH);
    SDL_Rect dstrect = { (640 / 2 - imgW / 2), 0, imgW, imgH };

    while (!quit)
    {
       SDL_WaitEvent(&event);

       switch(event.type)
       {
           //user exits through 'X'
            case SDL_QUIT:
                quit = true;
                break;
            //user exits through key press
            case SDL_KEYDOWN:
                quit = true;
                break;
       }
       SDL_RenderCopy(renderer, texture, NULL, &dstrect);
       SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(texture);
    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}

void showFinalImage(const char* fileName)
{
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window * window = SDL_CreateWindow("A Dragon's Wit",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    if (window == NULL)
        SDL_ShowSimpleMessageBox(0, "Window init error", SDL_GetError(),window);

    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer == NULL)
        SDL_ShowSimpleMessageBox(0, "Renderer init error",SDL_GetError(), window);

    SDL_Surface * image = SDL_LoadBMP(fileName);
    if (image == NULL)
        SDL_ShowSimpleMessageBox(0, "Image init error", SDL_GetError(),window);

    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,image);
    if (texture == NULL)
        SDL_ShowSimpleMessageBox(0, "Texture init error",
            SDL_GetError(), window);

    int width, height;
    SDL_QueryTexture(texture, NULL, NULL, &width, &height);

    int imgW = 432;
    int imgH = 432;
    SDL_QueryTexture(texture, NULL, NULL, &imgW, &imgH);
    SDL_Rect dstrect = { (640 / 2 - imgW / 2), 110, imgW, imgH };

    while (!quit)
    {
       SDL_WaitEvent(&event);

       switch(event.type)
       {
           //user exits through 'X'
            case SDL_QUIT:
                quit = true;
                break;
            //user exits through key press
            case SDL_KEYDOWN:
                quit = true;
                break;
       }
       SDL_RenderCopy(renderer, texture, NULL, &dstrect);
       SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(texture);
    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}

