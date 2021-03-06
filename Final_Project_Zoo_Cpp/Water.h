#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
using namespace std;

class Water : virtual public Animal
{
protected:
	float Swim_Speed;
public:
	Water();//default ctor
	Water(char* name, float age, float Swim_Speed);//ctor
	Water(const Water& w);//copy ctor
	virtual ~Water();//dctor
	virtual void print() const;//print func
};

