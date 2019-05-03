#ifndef __FIGURE_Z__
#define __FIGURE_Z__

#include "Tetramino.h"

class FigureZ : public Tetramino {

public:
	FigureZ(int x, int y);
	void rotate()& override;
	void setPrevState()& override;

private:
	bool secondTurn;

};

#endif  __FIGURE_Z__
