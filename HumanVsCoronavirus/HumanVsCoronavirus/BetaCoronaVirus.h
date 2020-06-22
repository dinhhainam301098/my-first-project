#pragma once
#include "CoronaVirus.h"
class BetaCoronaVirus:public CoronaVirus
{
public :
	void doBorn();
	int doClone();
	void doDie();
	void initResistance();
};

