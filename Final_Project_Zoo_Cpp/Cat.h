#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Land.h"
#include "Lion.h"
using namespace std;

class Cat :public Lion
{
private:
	char* color;
public:
	Cat();//default ctor
	Cat(char* name, float age, float Land_Speed, float weight, char* color);//ctor
	Cat(const Cat& c);//copy ctor
	virtual ~Cat();//dctor
	virtual void print() const;//print func
};

