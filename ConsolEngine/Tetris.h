#ifndef _TETRIS_
#define _TETRIS_

#include "BaseApp.h"
#include "Tetramino.h"
#include "TetraminoFactory.h"
#include "globals.h"

class Tetris : public BaseApp
{
public:
	Tetris();
	virtual void UpdateF(float deltaTime);
	virtual void KeyPressed(int btnCode);
private:
	std::unique_ptr<Tetramino> currentFigure;
	std::unique_ptr<Tetramino> nextFigure;
	std::vector<std::unique_ptr<SingleBrick>> landedBricks;
	bool moveable;
	int counterFigureBricks;
	bool changePreview;
	int counterLandedBricks;
	int score;
	int tickCounter;
	int currentTick;
	wstring scoreString;
	wstring scoreToString;

};

#endif _TETRIS_