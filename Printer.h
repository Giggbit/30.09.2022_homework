#pragma once
#include <iostream>
using namespace std;

class Printer {
	string name;
	string adress;

public:
	Printer(const char* name_printer, const char* mac_adress) {
		name = name_printer;
		adress = mac_adress;
	}

	void Print() {
		cout << "Name printer: " << name << endl;
		cout << "MAC Adress: " << adress << endl;
	}

};

