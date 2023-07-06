#include "Animal.h"

Animal::Animal(const string& name):name(name){}

void Animal::Eat()
{
	cout << "Тварина " << name << " їсть" << endl;
}

void Animal::Drink()
{
	cout << "Тварина " << name << " п'є" << endl;
}

void Animal::Go()
{
	cout << "Тварина " << name << " ходить" << endl;
}
