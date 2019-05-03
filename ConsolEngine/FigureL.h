#ifndef __FIGURE_L__
#define __FIGURE_L__

#include "Tetramino.h"

class FigureL : public Tetramino {

public:
	FigureL(int x, int y);
	void rotate()& override;

};

#endif  __FIGURE_L__
