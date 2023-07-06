#include "Animal.h"

Animal::Animal(const string& name):name(name){}

void Animal::Eat()
{
	cout << "������� " << name << " ����" << endl;
}

void Animal::Drink()
{
	cout << "������� " << name << " �'�" << endl;
}

void Animal::Go()
{
	cout << "������� " << name << " ������" << endl;
}
