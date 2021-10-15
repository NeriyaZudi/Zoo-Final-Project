#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Land.h"
#include "Lion.h"
#include "Cat.h"
using namespace std;

Cat::Cat()
{
	color = NULL;
}

Cat::Cat(char* name, float age, float Land_Speed, float weight, char* color) :Lion(name, age, Land_Speed, weight), Animal(name, age)
{
	this->color = new char[strlen(color) + 1];
	strcpy(this->color, color);
}

Cat::Cat(const Cat& c) :Lion(c), Animal(c)
{
	if (color)//if color isnt null
	{
		delete[] color;
		this->color = new char[strlen(c.color) + 1];
		strcpy(this->color, c.color);
	}
	else//color==null
	{
		this->color = new char[strlen(c.color) + 1];
		strcpy(this->color, c.color);
	}
}

Cat::~Cat()
{
	delete[] color;
}

void Cat::print() const
{
	Land::print();
	cout << "The Animal is: Cat" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Land_Speed << " Kmh." << endl;
	cout << "It's weight is: " << weight << " Kg." << endl;
	cout << "The cat's color is: " << color << endl;

}

