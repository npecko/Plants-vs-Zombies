#include "SnowPea.h"

SnowPea::SnowPea()
{
	price = 40;
}

SDL_Rect SnowPea::getInventoryPosition()
{
	position = { 548, 623, 82, 84 };
	return position;
}

int SnowPea::getPrice()
{
	return price;
}