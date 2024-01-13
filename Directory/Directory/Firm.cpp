#include "Firm.h"

void Firm::print() const
{
	cout << "Name: " << name << endl;
	cout << "Owner: " << owner << endl;
	cout << "Phone: " << phone << endl;
	cout << "Adress: " << adress << endl;
	cout << "Activity: " << activity << endl;
}

void Firm::save(string filename)
{
	ofstream fcout(filename, ios::out | ios::app);
	if (!fcout.is_open()) return;
	fcout << name << ' ' << owner << ' ' << phone << ' ' << adress << ' ' << activity << endl;
	fcout.close();
}
