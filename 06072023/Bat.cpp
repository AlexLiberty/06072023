#include "Bat.h"

Bat::Bat(const string& name) :Mammal(name),Bird(name) {}


void Bat::Sound() const
{
	cout << name << " каже 'Я котопес!'" << endl;
}
