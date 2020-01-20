#ifndef __PEA_SHOOTER_H__
#define __PEA_SHOOTER_H__
#pragma once 

#include "SDL.h"
#include "Flower.h"

class PeaShooter : public Flower
{
public:
	PeaShooter();
	SDL_Rect getInventoryPosition();
	int getPrice();
private:
	SDL_Rect position;
};

#endif // !__PEA_SHOOTER_H__