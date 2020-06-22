#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class CoronaVirus
{
public:
	CoronaVirus();
	~CoronaVirus();
	CoronaVirus(const CoronaVirus& c2);
	void loadADNInformation();
	void reduceResistance(int i_medicineResistance);
	virtual void doBorn() ;
	virtual int doClone() ;
	virtual void doDie() ;
	virtual void initResistance() ;
private :
	string m_dna; // lưu trữ thứ tự của chuỗi axit nucleic
	int m_resistance; // khả năng đề kháng của virus(10-30)
};
