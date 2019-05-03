#ifndef __FIGURE_I__
#define __FIGURE_I__

#include "Tetramino.h"

class FigureI : public Tetramino {

public:
	FigureI(int x, int y);
	void rotate()& override;
	void setPrevState()& override;

private:
	bool secondTurn;

};

#endif  __FIGURE_I__