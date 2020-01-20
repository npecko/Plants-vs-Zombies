#ifndef __FLOWER_H__
#define __FLOWER_H__
#include <string>

class Flower
{
public:
	Flower();
	void setPrice(int p);
	int getPrice();
protected:
	int price;
};

#endif // !__FLOWER_H__