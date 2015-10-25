#include "Classic.h"
#include  <iostream>
using namespace std;



Classic::Classic()
{
}


/*Classic::Classic(char *pw,Cd &d)
{
	c = d;
	for (int i = 0; i < 25; i++)
	{
		pwork[i] = *(pw + i);
	}
}
*/

Classic::Classic(char *pw ,char * s1, char * s2, int n, double x)
{
	/*s1 = new char[50];
	pw = new char[50];
	s2 = new char[20];*/
	for (int i = 0; i < 50; i++)
	{
		performers[i] = *(s1 + i);
		pwork[i] = *(pw + i);
		if (i >= 20) continue;
		label[i] = *(s2 + i);
	}
	selections = n;
	playtime = x;
}


Classic::~Classic()
{
}


void Classic::Report() const
{
	cout << "Primary Work: " << pwork << endl;
	cout << "Performers: " << performers << endl << "Label: " << label << endl << "Selections: " << selections
		<< endl << "Play time: " << playtime<<endl;
}


Classic Classic::operator&=(const Classic & d)
{
	Classic cd;
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
