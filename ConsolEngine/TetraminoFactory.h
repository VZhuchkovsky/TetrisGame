#ifndef __TETRAMINO_FACTORY__
#define __TETRAMINO_FACTORY__

#include "FigureI.h"
#include "FigureZ.h"
#include "FigureS.h"
#include "FigureL.h"
#include "FigureJ.h"
#include "FigureT.h"
#include "FigureO.h"
 
#include <memory>

class TetraminoFactory {

public:
	static std::unique_ptr<Tetramino> createTetramino(int x, int y);

};


#endif  __TETRAMINO_FACTORY__

