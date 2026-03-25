#pragma once
#include <iostream>
#include <deque>
#include "direction.h"

class Snake {
private:
	std::deque<std::tuple<int, int>> body_;
	Direction direction_;
public:
	Snake();
	int GetLength();
	void Move();
	void SetDirection(Direction _direction);
	~Snake();
};