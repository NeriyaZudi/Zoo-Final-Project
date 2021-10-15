#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Air.h"
#include "Hawk.h"
using namespace std;

Hawk::Hawk()
{
	this->Tail_Length = 0;
}

Hawk::Hawk(char* name, float age, float Max_Height, float Air_Speed, float Tail_Length) :Eagle(name, age, Air_Speed, Max_Height), Animal(name, age)
{
	this->Tail_Length = Tail_Length;
}

Hawk::Hawk(const Hawk& Hw) : Eagle(Hw), Animal(Hw)
{
	this->Tail_Length = Hw.Tail_Length;
}

void Hawk::print() const
{
	Air::print();
	cout << "The Animal is: Hawk" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Air_Speed << " Kmh." << endl;
	cout << "It's max flight height is: " << Max_Height << " Meters." << endl;
	cout<<"It's tail's length is: " << Tail_Length << " Meters." << endl;

}
