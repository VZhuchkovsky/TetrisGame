#include "SingleBrick.h"

SingleBrick::SingleBrick(int x, int y) : coordX(x), coordY(y){}

int SingleBrick::getCoordX() const
{
	return coordX;
}

int SingleBrick::getCoordY() const
{
	return coordY;
}

void SingleBrick::setCoordX(int x)&
{
	coordX = x;
}

void SingleBrick::setCoordY(int y)&
{
	coordY = y;
}

void SingleBrick::movingRight()&
{
	++coordY;
}

void SingleBrick::movingLeft()&
{
	--coordY;
}

void SingleBrick::falling()&
{
	++coordX;
}


bool operator==(const SingleBrick & sb1, const SingleBrick & sb2)
{
	return (sb1.getCoordX() == sb2.getCoordX() &&
		sb1.getCoordY() == sb2.getCoordY());
}
