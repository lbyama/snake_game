#pragma once
#include<iostream>
#include "tileboard.h"
#include "direction.h"

enum Difficulty {
	kEasy,
	kMedium,
	kHard
};

class Game {
private:
	int score_;
	int high_score_;
	Difficulty difficulty_;
	int update_rate;
	Direction last_pressed_direction_;
	std::unique_ptr<TileBoard> board_;
public:
	Game();
	void KeyPressedHandler();
	void MainMenu();
	void Gameplay();
	void Lost();
	void Won();
	bool IsGameLost();
	bool IsGameWon();
	void SetDifficulty(Difficulty _difficulty);
	void SetScore(int _score);
	void SetHighScore(int _high_score);
};