#include "FigureJ.h"

FigureJ::FigureJ(int x, int y) : Tetramino(x, y)
{
	//creating I figure
	currentCoords.at(0).reset(new SingleBrick(x - 1, y + 1));
	currentCoords.at(1).reset(new SingleBrick(x, y + 1));
	currentCoords.at(2).reset(new SingleBrick(x + 1, y + 1));
	currentCoords.at(3).reset(new SingleBrick(x + 1, y));

	prevCoords.at(0).reset(new SingleBrick(x - 1, y + 1));
	prevCoords.at(1).reset(new SingleBrick(x, y + 1));
	prevCoords.at(2).reset(new SingleBrick(x + 1, y + 1));
	prevCoords.at(3).reset(new SingleBrick(x + 1, y));
}

void FigureJ::rotate()&
{


	for (int i = 0; i < TETRAMINO_SIZE; i++) {

		if (!(currentCoords.at(i) == centerOfGravity)) {

			currentCoords.at(i)->setCoordX(centerOfGravity->getCoordX() -
				(prevCoords.at(i)->getCoordY() - centerOfGravity->getCoordY()));

			currentCoords.at(i)->setCoordY(centerOfGravity->getCoordY() +
				(prevCoords.at(i)->getCoordX() - centerOfGravity->getCoordX()));

		}

	}

}
