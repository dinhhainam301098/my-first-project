#pragma once
#include "CoronaVirus.h"
#define blue 0x0000ff
#define red 0xff0000

class AlphaCoronaVirus :public CoronaVirus
{
public :
	void doBorn();
	int doClone();
	void doDie();
	void initResistance();
private:
	int m_color;
};

