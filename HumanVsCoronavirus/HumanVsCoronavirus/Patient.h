#pragma once
#include "CoronaVirus.h"
#include <list>

using namespace std;
class Patient
{
public :
	Patient();
	~Patient();
	void initResistance();
	list<CoronaVirus*> m_virusList; // list virus trong nguoi benh nhan
	enum m_state {DIE=0,AlIVE=1};
};

