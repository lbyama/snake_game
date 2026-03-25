#pragma once
#include <iostream>
#include <vector>
#include "snake.h"
#include "apple.h"
#include "direction.h"

class TileBoard {
private:
	int board_size_;
	std::vector<Apple> apples_;
	std::unique_ptr<Snake> snake_;
public:
	TileBoard(int _size);
	bool IsBoardFilled();
	bool IsSnakeOutOfBounds();
	void UpdateBoard(Direction _direction);
	void NewApplePosition();
	~TileBoard();
};