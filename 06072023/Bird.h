#pragma once
#include<iostream>
#include<string>
#include "Animal.h"

using namespace std;

class Bird:virtual protected Animal
{
public:
	Bird() {};
	Bird(const string& name);
	void Sound() const override;
};

