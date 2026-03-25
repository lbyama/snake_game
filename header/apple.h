#pragma once
#include <tuple>

class Apple {
protected:
	static int current_active_apples_;
private:
	std::tuple<int, int> position_;
public:
	Apple();
	int GetCurrentActiveApples();
	void SetPosition(int _x, int _y);
	~Apple();
};