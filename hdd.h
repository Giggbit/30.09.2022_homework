#pragma once
#include "Laptop.h"
#include <iostream>
using namespace std;

class hdd {
	int gb;

public:
	hdd() {
		gb = 0;
	}

	hdd(int amount_gb) {
		gb = amount_gb;
	}

	void Input() {
		cout << "Enter amount of Gsb: ";
		cin >> gb;
	}

	void Print() {
		cout << "Amount of Gb: " << gb << "Gb" << endl;
	}

};

