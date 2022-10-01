#pragma once
#include <iostream>
using namespace std;

class Keyboard {
	string name;
	string language;

public:
	Keyboard() {
		name = nullptr;
		language = nullptr;
	}

	Keyboard(const char* name_keyboard, const char* l) {
		name = name_keyboard;
		language = l;
	}

	void Print() {
		cout << "Name of keyboard: " << name << endl;
		cout << "Keyboard layout: " << language << endl;
	}

};

