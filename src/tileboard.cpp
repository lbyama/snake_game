#include "tileboard.h"

TileBoard::TileBoard(int _size)
{
    this->board_size_ = _size;
    apples_.push_back(Apple());
    snake_ = std::unique_ptr<Snake>(new Snake());
}

bool TileBoard::IsBoardFilled()
{
    return false;
}

bool TileBoard::IsSnakeOutOfBounds()
{
    return false;
}

void TileBoard::UpdateBoard(Direction _direction)
{
}

void TileBoard::NewApplePosition()
{
}

TileBoard::~TileBoard()
{
}
