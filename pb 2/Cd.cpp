#include "Cd.h"
#include <iostream>
using namespace std;



Cd::Cd()
{
}


Cd::Cd(char * s1, char * s2, int n, double x)
{
	//s1 = new char[50];
	//s2 = new char[20];
	
	 for (int i = 0; i < 50; i++)
	{
		performers[i] = *(s1+i);
		if(i>=20) continue;
		label[i] = *(s2+i);
	}
	selections = n;
	playtime = x;

}


Cd::Cd(const Cd & d)
{
	for (int i = 0; i < 50; i++)
	{
		performers[i] = d.performers[i];
		if (i >= 20) continue;
		label[i] = d.label[i];
	}
	selections = d.selections;
	playtime = d.playtime;
}




Cd::~Cd()
{
}

void Cd::Report() const
{
	cout << "Performers: " << performers << endl << "Label: " << label << endl << "Selections: " << selections
		<< endl << "Play time: " << playtime<<endl;
}

Cd Cd::operator&=(const Cd & d)
{
	Cd cd;
	for (int i = 0; i < 50; i++)
	{
		performers[i] = cd.performers[i] = d.performers[i];
		if (i >= 25) continue;
		label[i] = cd.label[i] = d.label[i];
	}
	selections = cd.selections = d.selections;
	playtime = cd.playtime = d.playtime;
	return cd;
}
