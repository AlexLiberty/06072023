#pragma once
#include<iostream>
#include<string>
#include "Animal.h"

using namespace std;

class Mammal:virtual protected Animal
{
public:
	Mammal() {};
	Mammal(const string& name);
	void Sound() const override;
};

