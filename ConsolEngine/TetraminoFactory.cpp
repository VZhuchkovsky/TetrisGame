#include "TetraminoFactory.h"

#include <cassert>

std::unique_ptr<Tetramino> TetraminoFactory::createTetramino(int x, int y)
{
	int r = rand() % 7 + 1;

	if (r == 1) {
		return std::unique_ptr<Tetramino>(new FigureI(x, y));
	}
	else if (r == 2) {
		return std::unique_ptr<Tetramino>(new FigureJ(x, y));
	}
	else if (r == 3) {
		return std::unique_ptr<Tetramino>(new FigureL(x, y));
	}
	else if (r == 4) {
		return std::unique_ptr<Tetramino>(new FigureO(x, y));
	}
	else if (r == 5) {
		return std::unique_ptr<Tetramino>(new FigureS(x, y));
	}
	else if (r == 6) {
		return std::unique_ptr<Tetramino>(new FigureT(x, y));
	}
	else if (r == 7) {
		return std::unique_ptr<Tetramino>(new FigureZ(x, y));
	}
	else {
		assert(false);
	}
}
