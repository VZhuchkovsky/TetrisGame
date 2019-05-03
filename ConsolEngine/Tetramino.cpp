#include "Tetramino.h"

Tetramino::Tetramino(int x, int y) : centerOfGravity(new SingleBrick(x, y)),prevCenter(new SingleBrick(x, y)) , controllable(true), landed(false){}

std::array<std::unique_ptr<SingleBrick>, TETRAMINO_SIZE>& Tetramino::getPrevCoords()
{
	return prevCoords;
}

std::array<std::unique_ptr<SingleBrick>, TETRAMINO_SIZE>& Tetramino::getCurrentCoords()
{
	return currentCoords;
}

std::unique_ptr<SingleBrick>& Tetramino::getCenter()
{
	return centerOfGravity;
}

void Tetramino::movingRight()&
{

	for (int i = 0; i < TETRAMINO_SIZE; i++) {
		currentCoords.at(i)->movingRight();
	}

	centerOfGravity->movingRight();

	//bool moveable = true;
/*
	for (int i = 0; i < TETRAMINO_SIZE; i++) {
		
		if (GetChar(currentCoords.at(i)->getCoordX() + 1, 
			currentCoords.at(i)->getCoordY()) != '.') {
			moveable = false;
			break;
		}

	}

	if (moveable) {

		/*if (GetChar(centerOfGravity->getCoordX() + 1, centerOfGravity->getCoordY()) != '.') {
			moveable = false;
		}*/

/*	}

	if (moveable) {
		for (int i = 0; i < TETRAMINO_SIZE; i++) {
			currentCoords.at(i)->movingRight();
		}

		centerOfGravity->movingRight();
	}*/
	
}

void Tetramino::movingLeft()&
{

	for (int i = 0; i < TETRAMINO_SIZE; i++) {
		currentCoords.at(i)->movingLeft();
	}

	centerOfGravity->movingLeft();

}

void Tetramino::falling()&
{

	for (int i = 0; i < TETRAMINO_SIZE; i++) {
		currentCoords.at(i)->falling();
	}

	centerOfGravity->falling();

}

void Tetramino::backup()&
{

	for (int i = 0; i < TETRAMINO_SIZE; i++) {
		prevCoords.at(i)->setCoordX(currentCoords.at(i)->getCoordX());
		prevCoords.at(i)->setCoordY(currentCoords.at(i)->getCoordY());
	}

	prevCenter->setCoordX(centerOfGravity->getCoordX());
	prevCenter->setCoordY(centerOfGravity->getCoordY());

}

void Tetramino::setPrevState()&
{

	for (int i = 0; i < TETRAMINO_SIZE; i++) {
		currentCoords.at(i)->setCoordX(prevCoords.at(i)->getCoordX());
		currentCoords.at(i)->setCoordY(prevCoords.at(i)->getCoordY());
	}

	centerOfGravity->setCoordX(prevCenter->getCoordX());
	centerOfGravity->setCoordY(prevCenter->getCoordY());

}

bool Tetramino::isControllable()&
{
	return controllable;
}

void Tetramino::setControllable()&
{
	controllable = !controllable;
}

bool Tetramino::isLanded()&
{
	return landed;
}

void Tetramino::setLanded()&
{
	landed = true;
}
