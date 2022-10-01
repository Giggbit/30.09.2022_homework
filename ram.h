#pragma once
#include "Laptop.h"
#include <iostream>
using namespace std;

class Ram {
	int memory;

public:
	Ram() {
		memory = 0;
	}

	Ram(int m_ram) {
		memory = m_ram;
	}

	void Input() {
		cout << "Enter memory of RAM: ";
		cin >> memory;
	}

	void Print() {
		cout << "RAM memory: " << memory << endl;
	}

};

