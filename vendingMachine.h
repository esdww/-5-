#pragma once
#include<iostream>
#include<string>
using namespace std;

class VendingMachine
{
	int emptySlot;
	int countSlot;
	int snuckSlot;
	int allsnuck;

	friend ostream& operator << (ostream& output, const VendingMachine& m);
	VendingMachine(int emptyslot, int slot, int snuclslot, int snuck);
	VendingMachine(const  VendingMachine& other);
	
	int getaddSnuck()const;
	void setaddSnuck(int allsnuck, int emptySlot);
	int getchangeSlot()const;
	void setchangeSlot(int value);
};

class Snuck
{
	string snuckname;
	double snuckcost;
	double snuckfoodvalue;
	double snucksugar;
public:
	friend ostream& operator << (ostream& output, const Snuck& a);
	Snuck( string name, double snuck, double foodvalue, double sugar );
	Snuck(const Snuck& other);
	
};

