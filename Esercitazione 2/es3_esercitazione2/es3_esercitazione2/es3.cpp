#include<iostream>
#include "es3.h"
#include<fstream>
using namespace std;

int main()
{
	CreditCard credit("Giovanni", "3453029");
	string line;
	string causale;
	int euro;
	int centesimi;
	Money tot(0, 0);
	credit.setTotal(tot);
	ifstream myfile ("charges.txt");
	if (myfile.is_open())
	{
		while (myfile >> causale >> euro >> centesimi)
		{
			credit.charge(causale, euro, centesimi);
		}
		myfile.close();
	}
	cout << credit.get_totalcharges();
	
	return 0;
}