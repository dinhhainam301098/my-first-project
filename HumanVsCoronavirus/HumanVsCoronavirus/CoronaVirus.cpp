#include "CoronaVirus.h"

CoronaVirus::CoronaVirus()
{
	m_dna = "";
	m_resistance = 0;
}

CoronaVirus::~CoronaVirus()
{
}

CoronaVirus::CoronaVirus(const CoronaVirus& c2)
{
}

void CoronaVirus::loadADNInformation()
{
	fstream infile;
	infile.open("ATGX.txt",ios::in);
	if (infile.is_open())
	{
		
		while (getline(infile,m_dna))
		{
			cout << m_dna << endl;
		}
	}
	infile.close();
}

void CoronaVirus::reduceResistance(int i_medicineResistance)
{
}

void CoronaVirus::doBorn()
{
}

int CoronaVirus::doClone()
{
	return 0;
}

void CoronaVirus::doDie()
{
}

void CoronaVirus::initResistance()
{
}
