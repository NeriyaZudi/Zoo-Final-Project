#pragma once
#include "Animal.h"

Animal::Animal()
{
	name = NULL;
	age = 0.0;
}

Animal::Animal(char* name, float age)
{
	count++;//Static variable update
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->age = age;
}

Animal::Animal(const Animal& A)
{
	if (this->name)//if name isnt null
	{
		delete[] this->name;
		this->name = new char[strlen(A.name) + 1];
		strcpy(this->name, A.name);
		this->age = A.age;
		count++;//Static variable update
	}
	else
	{
		this->name = new char[strlen(A.name) + 1];
		strcpy(this->name, A.name);
		this->age = A.age;
		count++; // Static variable update
	}
}

Animal::~Animal()
{
	count--; // Static variable update
	delete[] name;//Dynamic memory release
	
}

int Animal::print_static()
{
	return count;//return Static variable
}

