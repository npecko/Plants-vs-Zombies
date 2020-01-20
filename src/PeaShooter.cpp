#include "PeaShooter.h"

PeaShooter::PeaShooter()
{
	price = 30;
}

SDL_Rect PeaShooter::getInventoryPosition()
{
	position = { 413, 623, 82, 84 };
	return position;
}

int PeaShooter::getPrice()
{
	return price;
}