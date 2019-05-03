#include "FigureS.h"

FigureS::FigureS(int x, int y) : Tetramino(x, y), secondTurn(false)
{
	//creating I figure
	currentCoords.at(0).reset(new SingleBrick(x, y));
	currentCoords.at(1).reset(new SingleBrick(x - 1, y));
	currentCoords.at(2).reset(new SingleBrick(x, y - 1));
	currentCoords.at(3).reset(new SingleBrick(x - 1, y + 1));

	prevCoords.at(0).reset(new SingleBrick(x, y));
	prevCoords.at(1).reset(new SingleBrick(x - 1, y));
	prevCoords.at(2).reset(new SingleBrick(x, y - 1));
	prevCoords.at(3).reset(new SingleBrick(x - 1, y + 1));
}

void FigureS::rotate()&
{
	int a = -1;//sinus

	if (!secondTurn) {
		a *= -1;
	}

	secondTurn = !secondTurn;

	for (int i = 0; i < TETRAMINO_SIZE; i++) {

		if (!(currentCoords.at(i) == centerOfGravity)) {

			currentCoords.at(i)->setCoordX(centerOfGravity->getCoordX() -
				(prevCoords.at(i)->getCoordY() - centerOfGravity->getCoordY()) * a);

			currentCoords.at(i)->setCoordY(centerOfGravity->getCoordY() +
				(prevCoords.at(i)->getCoordX() - centerOfGravity->getCoordX()) * a);

		}

	}

}

void FigureS::setPrevState() &
{
	Tetramino::setPrevState();

	secondTurn = !secondTurn;
}
