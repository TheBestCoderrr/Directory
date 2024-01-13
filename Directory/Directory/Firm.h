#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Firm
{
public:
	explicit Firm(string name, string owner, string phone, string adress, string activity, Firm* next = nullptr) : name(name), owner(owner), phone(phone),
		adress(adress), activity(activity), next(next) {}
	string getName() const { return name; }
	string getOwner() const { return owner; }
	string getPhone() const { return phone; }
	string getAdress() const { return adress; }
	string getActivity() const { return activity; }
	void setNext(Firm* cur) { next = cur; }
	Firm* getNext() const { return next; }
	void print() const;
	void save(string filename);
private:
	string name;
	string owner;
	string phone;
	string adress;
	string activity;
	Firm* next;
};

