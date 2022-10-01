#pragma once
#include <iostream>
using namespace std;

class Video—ard {
	string name;
	string type;
	int memory;		

public:
	Video—ard() {
		name = nullptr;
		type = nullptr;
		memory = 0;
	}

	Video—ard(const char* name_card) {
		name = name_card;
	}

	void Input() {
		cout << "Enter type of video card: ";
		cin >> type;
		cout << "Enter amount memroy of video card: ";
		cin >> memory;
	}

	void Print() {
		cout << "Name of video card: " << name << endl;
		cout << "Type of video card: " << type << endl;       
		cout << "Memory of video card: " << memory << "Mb/Gb" << endl;
	}

};

