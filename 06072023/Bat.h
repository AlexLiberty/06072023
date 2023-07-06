#pragma once
#include<iostream>
#include<string>
#include "Bird.h"
#include "Mammal.h"
#include "Animal.h"

using namespace std;

class Bat:protected Bird, protected Mammal
{
public:
	Bat(const string& name);
	void Sound() const override;
};

