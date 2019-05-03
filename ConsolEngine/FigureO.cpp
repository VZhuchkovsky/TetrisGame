#include "FigureO.h"

FigureO::FigureO(int x, int y) : Tetramino(x, y)
{
	//creating I figure
	currentCoords.at(0).reset(new SingleBrick(x, y));
	currentCoords.at(1).reset(new SingleBrick(x - 1, y));
	currentCoords.at(2).reset(new SingleBrick(x - 1, y + 1));
	currentCoords.at(3).reset(new SingleBrick(x, y + 1));

	prevCoords.at(0).reset(new SingleBrick(x, y));
	prevCoords.at(1).reset(new SingleBrick(x - 1, y));
	prevCoords.at(2).reset(new SingleBrick(x - 1, y + 1));
	prevCoords.at(3).reset(new SingleBrick(x, y + 1));
}

void FigureO::rotate()&
{}