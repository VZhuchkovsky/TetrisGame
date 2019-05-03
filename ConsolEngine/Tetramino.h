#ifndef __TETRAMINO__
#define __TETRAMINO__

//#include "BaseApp.h"
#include "SingleBrick.h"
#include "globals.h"


#include <array>
#include <memory>

class Tetramino : public Pixel{
	
public:

	Tetramino(int x, int y);
	virtual void rotate()& = 0;//rotation of the figure
	std::array<std::unique_ptr<SingleBrick>, TETRAMINO_SIZE>& getPrevCoords();
	std::array<std::unique_ptr<SingleBrick>, TETRAMINO_SIZE>& getCurrentCoords();
	std::unique_ptr<SingleBrick>& getCenter(); 
	void movingRight()&;
	void movingLeft()&;
	void falling()&;
	void backup()&;//saves new prevState
	virtual void setPrevState()&;//return figure previous coords
	bool isControllable()&;
	void setControllable()&;
	bool isLanded()&;
	void setLanded()&;

	

	

protected:

	std::array<std::unique_ptr<SingleBrick>, TETRAMINO_SIZE> prevCoords;
	std::array<std::unique_ptr<SingleBrick>, TETRAMINO_SIZE> currentCoords;
	std::unique_ptr<SingleBrick> prevCenter;//previous center of gravity
	std::unique_ptr<SingleBrick> centerOfGravity;

private:
	bool controllable;//can be moved/rotated
	bool landed;//is landed


};

#endif  __TETRAMINO__

