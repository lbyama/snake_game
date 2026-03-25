#include "apple.h"

int Apple::current_active_apples_ = 0;

Apple::Apple()
{
	Apple::current_active_apples_++;
	this->position_ = { 0,0 };
}

int Apple::GetCurrentActiveApples()
{
	return 0;
}

void Apple::SetPosition(int _x, int _y)
{
}

Apple::~Apple()
{
	Apple::current_active_apples_--;
}
