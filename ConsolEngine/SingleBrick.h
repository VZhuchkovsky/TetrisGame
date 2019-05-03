#ifndef __SINGLE_BRICK__
#define __SINGLE_BRICK__

#include "Pixel.h"

class SingleBrick : public Pixel {

public:

	SingleBrick(int x = 0, int y = 0);
	friend bool operator== (const SingleBrick &sb1, const SingleBrick &sb2);
	int getCoordX() const;
	int getCoordY() const;
	void setCoordX(int x)&; 
	void setCoordY(int y)&;
	void movingRight()&;
	void movingLeft()&;
	void falling()&;

private:
	int coordX;
	int coordY;

};
#endif  __SINGLE_BRICK__

