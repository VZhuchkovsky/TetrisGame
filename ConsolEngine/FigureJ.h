#ifndef __FIGURE_J__
#define __FIGURE_J__

#include "Tetramino.h"

class FigureJ : public Tetramino {

public:
	FigureJ(int x, int y);
	void rotate()& override;

};

#endif  __FIGURE_J__