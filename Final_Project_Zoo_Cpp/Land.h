#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
using namespace std;

class Land :virtual public Animal
{
protected:
	float Land_Speed;
public:
	Land();//default ctor
	Land(char* name, float age, float Land_Speed);//ctor
	Land(const Land& L);//copy ctor
	virtual ~Land() {}//dctor
	virtual void print() const;//print func
};
