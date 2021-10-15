#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Seagull.h"
#include "Land.h"
#include "Water.h"
#include "Air.h"
using namespace std;

Seagull::Seagull()
{
	this->weight = 0;
}

Seagull::Seagull(char* name, float age, float Swim_Speed, float Air_Speed, float weight) :Animal(name, age), Water(name, age, Swim_Speed), Air(name, age, Air_Speed)
{
	this->weight = weight;
}

Seagull::Seagull(const Seagull& sg) : Animal(sg), Water(sg), Air(sg)
{
	this->weight = sg.weight;
}

Seagull::~Seagull()
{
}

void Seagull::print() const
{
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "    Air/Water animal    " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	cout << "The Animal is: Seagull" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed in air is: " << Air_Speed << " Kmh." << endl;
	cout << "It's speed in water is: " << Swim_Speed << " Kmh." << endl;
	cout << "It's weight is: " << weight << " Kg." << endl;
}

