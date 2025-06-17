#pragma once
#include "Random.h"
#include "GameInformation.h"
#include "GmaeBoard.h"

class Game : public GmaeBoard, public GameInformation
{
private:
	Random m_rnd;
public:
	Game();
	int normalGame();
};

