#pragma once
#include "Cd.h"
class Classic :
	public Cd
{
	char pwork[50] = {'\0'};

public:
	Classic();
	Classic(char *pw,char * s1, char * s2, int n, double x);
	~Classic();
	void Report() const;
	Classic operator&=(const Classic &d);
};

