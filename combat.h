/*#ifndef COMBAT_H_INCLUDED
#define COMBAT_H_INCLUDED

#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include<SDL.h>
#include<SDL_image.h>
#include<iostream>

#define WIDTH 800
#define HEIGHT 600

class Combat
{
    private:
        bool Running;
        void showFinalImage(const char* fileName);
        void play();
        SDL_Window* window;
        SDL_Renderer* renderer;
        SDL_Event Event;

        SDL_Texture *Background, *Player;
        SDL_Rect rectBackground, rectPlayer;
    public:
        Combat();
        int OnExecute();
        bool OnInit();
        bool LoadContent();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void Cleanup();
};
#endif // COMBAT_H_INCLUDED*/
