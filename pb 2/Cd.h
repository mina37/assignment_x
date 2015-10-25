#pragma once
class Cd
{
protected:
	char performers[50] = {'\0'};
	char label[20] = {'\0'};
	int selections; // number of selections
	double playtime; // playing time in minutes
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	~Cd();
	void Report() const; // reports all CD data
	Cd operator&=(const Cd & d);
};

