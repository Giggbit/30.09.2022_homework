#include <iostream>
#include <string>
///////////////////
#include "Laptop.h"
#include "hdd.h"
#include "ram.h"
#include "VideoСard.h"
#include "cpu.h"
#include "Keyboard.h"
#include "Printer.h"
using namespace std;

int main() {
	VideoСard card("RTX 1050");
	CPU cp("Intel");
	Keyboard kb("Logitech", "English");
	Printer print("brother", "00-80-77-90-0a-8c");
	
	Laptop Lap("Asus", 512, 8, card, cp, &kb, &print);
	Lap.Print();

	

}

