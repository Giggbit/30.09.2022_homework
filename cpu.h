#pragma once
#include <iostream>
using namespace std;

class CPU {
	string name;
	string socket;
	int capacity; // разрядность процессора
	int cores; // ядра 
	int pcs; // processor clock speed

public:
	CPU() {
		name = nullptr;
		socket = nullptr;
		capacity = 0;
		cores = 0;
		pcs = 0;
	}

	CPU(const char* name_cpu) {
		name = name_cpu;
	}

	void Input() {
		cout << "Enter socket of cpu: ";
		cin >> socket;
		cout << "Enter capacity of cpu: ";
		cin >> capacity;
		cout << "Enter number of cores: ";
		cin >> cores;
		cout << "Enter processor clock speed: ";
		cin >> pcs;
	}

	void Print() {
		cout << "Name of cpu: " << name << endl;
		cout << "Socket of cpu: " << socket << endl;
		cout << "Cpacity of cpu: " << capacity << endl;
		cout << "Number of cores: " << cores << endl;
		cout << "Processor clock speed: " << pcs << endl;
	}


};

