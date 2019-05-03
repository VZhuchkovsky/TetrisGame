// Copyright 2009-2014 Blam Games, Inc. All Rights Reserved.

#include "TestApp.h"
#include "Tetris.h"

#include<ctime>

void main ()
{
	srand(std::time(0));
	Tetris tetris;
	tetris.Run();
}
