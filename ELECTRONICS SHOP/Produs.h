#pragma once
#include<string>
#include<iostream>
using namespace std;
class Produs
{
protected:
	int id;
	string nume;
	double pret;
public:
	Produs(const int& ,const string&,const double&);
	virtual ~Produs();
	int get_id();
	virtual void info();
	friend ostream& operator<<(ostream&,const Produs&);
};

