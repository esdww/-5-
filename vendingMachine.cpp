#include "vendingMachine.h"
#include <iostream>
#include<string>
using namespace std;

 Snuck::Snuck(string name, double cost, double foodvalue, double sugar)
{
	snuckname = name;
	snuckcost = cost;
	snuckfoodvalue = foodvalue;
	snucksugar = sugar;
}
 Snuck::Snuck(const Snuck& other)
 {

	 this->snuckname = other.snuckname;
	 this->snuckcost = other.snuckcost;
	 this->snuckfoodvalue = other.snuckfoodvalue;
	 this->snucksugar = other.snucksugar;
 }
 ostream& operator<<(ostream& output, const Snuck& a)
 {
	 output << "�������� ��⭮稪�" << a.snuckname << endl
		 << "�⮨�����" << a.snuckcost << endl
		 << "��饢�� 業�����" << a.snuckfoodvalue << endl
		 << "������⢮ ���" << a.snucksugar << endl;
	 return output;
 }


VendingMachine::VendingMachine(int emptyslot, int slot, int snuckslot, int snuck)
{
	emptySlot =emptyslot ;
	countSlot = slot;
	snuckSlot = snuckslot;
	allsnuck = snuck;
}
VendingMachine::VendingMachine(const VendingMachine& other)
{
	this->emptySlot = other.emptySlot;
	this->countSlot = other.countSlot;
	this->snuckSlot = other.snuckSlot;
	this->allsnuck = other.allsnuck;

}

ostream& operator<<(ostream& output, const VendingMachine& m)
{
	output << "������⢮ ��⮭稪��, ����� ��������� � ᫮�" << m.snuckSlot << endl
		<< "������⢮ ᫮⮢" << m.countSlot << endl
		<< "������⢮ ᢮������ ᫮⮢" << m.emptySlot << endl
		<< "������⢮ ��⮭稪��" << m.allsnuck << endl;
	return output;
}



int VendingMachine::getaddSnuck()const
{
	return allsnuck, emptySlot;
}
void VendingMachine::setaddSnuck(int allsnuck, int emptySlot)
{
	allsnuck ++;
	emptySlot --;

}

int VendingMachine::getchangeSlot()const
{
	return countSlot;
}
void VendingMachine::setchangeSlot(int value)
{
	if (value > 0)
		countSlot = value;
	else
		cout << "���祭�� ������ ���� ����� ���";

}

