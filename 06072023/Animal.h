#pragma once
#include<iostream>
#include<string>

using namespace std;

class Animal
{
protected:
	string name;
public:
	Animal() {};
	Animal(const string& name);
	void Eat();
	void Drink();
	void Go();
	virtual void Sound() const = 0;
};

