#ifndef __FIGURE_T__
#define __FIGURE_T__

#include "Tetramino.h"

class FigureT : public Tetramino {

public:
	FigureT(int x, int y);
	void rotate()& override;

};

#endif  __FIGURE_T__
