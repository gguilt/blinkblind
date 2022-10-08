/* Blindblank Engine / 2015-10-28 - v0.0.0.0 */
#include "../include/blindblank.h"
#include <SDL.h>
#include <iostream>

namespace blindblank
{
    // Game class
    Game::Game()
    {
        SDL_Init(SDL_INIT_VIDEO);
    }

    Game::~Game()
    {
        SDL_Quit();
    }

    int Game::game_init(std::string windowName)
    {
        std::cout << "Hey! It's working!!" << std::endl;
        std::cout << windowName << std::endl;
        return 0;
    }

    void Game::game_cleanup()
    {

    }
}
