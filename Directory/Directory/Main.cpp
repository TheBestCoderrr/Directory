#include "Directory.h"

int main() {
	Directory directory;
	size_t user_answer = 1;
	cout << "0 - Exit\n1 - add firm\n2 - print\n3 - find firm by name\n4 - find firm by owner\n5 - find firm by phone\n6 - find firm by activity\n7 - save" << endl;
	while (user_answer != 0) {
		cout << "Enter num: ";
		cin >> user_answer;
		switch (user_answer) {
		case 0:
		break;
		case 1:
		{
			string name;
			cout << "Enter name: ";
			cin >> name;
			string owner;
			cout << "Enter owner: ";
			cin >> owner;
			string phone;
			cout << "Enter phone: ";
			cin >> phone;
			string adress;
			cout << "Enter adress: ";
			cin >> adress;
			string activity;
			cout << "Enter activity: ";
			cin >> activity;
			directory.push_back(Firm(name, owner, phone, adress, activity));
		}
		break;
		case 2:
		directory.print();
		break;
		case 3:
		{
			string name;
			cout << "Enter name: ";
			cin >> name;
			Firm* firm = directory.findFirmByName(name);
			if (!firm) cout << "Firm not found" << endl;
			else firm->print();
		}
		break;
		case 4:
		{
			string owner;
			cout << "Enter owner: ";
			cin >> owner;
			Firm* firm = directory.findFirmByOwner(owner);
			if (!firm) cout << "Firm not found" << endl;
			else firm->print();
		}
		break;
		case 5:
		{
			string phone;
			cout << "Enter phone: ";
			cin >> phone;
			Firm* firm = directory.findFirmByPhone(phone);
			if (!firm) cout << "Firm not found" << endl;
			else firm->print();
		}
		break;
		case 6:
		{
			string activity;
			cout << "Enter activity: ";
			cin >> activity;
			Firm* firm = directory.findFirmByActivity(activity);
			if (!firm) cout << "Firm not found" << endl;
			else firm->print();
		}
		break;
		case 7:
		directory.save("Directory.txt");
		break;
		default:
		cout << "Invalid variant" << endl;
		break;
		}
	}
}