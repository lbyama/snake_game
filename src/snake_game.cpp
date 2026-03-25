// snake_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "game.h"

int main()
{
    std::unique_ptr<Game> game(new Game());
    std::cout << "Hello World!\n";
}
