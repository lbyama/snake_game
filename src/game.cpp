#include "game.h"

Game::Game()
{
	this->score_ = 0;
	this->high_score_ = 0;
	this->difficulty_ = kEasy;
	this->update_rate = 0;
	this->last_pressed_direction_ = kRight;
	this->board_ = std::unique_ptr<TileBoard>(new TileBoard(12));
}

void Game::KeyPressedHandler()
{
}

void Game::MainMenu()
{
}

void Game::Gameplay()
{
}

void Game::Lost()
{
}

void Game::Won()
{
}

bool Game::IsGameLost()
{
    return false;
}

bool Game::IsGameWon()
{
    return false;
}

void Game::SetDifficulty(Difficulty _difficulty)
{
}

void Game::SetScore(int _score)
{
}

void Game::SetHighScore(int _high_score)
{
}
