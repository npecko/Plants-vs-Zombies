#include "Cactus.h"

Cactus::Cactus()
{
	price = 50;
}

SDL_Rect Cactus::getInventoryPosition()
{
	position = { 683, 623, 82, 84 };
	return position;
}

int Cactus::getPrice()
{
	return price;
}