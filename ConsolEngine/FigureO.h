#ifndef __FIGURE_O__
#define __FIGURE_O__

#include "Tetramino.h"

class FigureO : public Tetramino {

public:
	FigureO(int x, int y);
	void rotate()& override;

};

#endif  __FIGURE_O__

