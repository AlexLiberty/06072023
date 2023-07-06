#include "Mammal.h"

Mammal::Mammal(const string& name):Animal(name){}

void Mammal::Sound() const
{
	cout << name << " ךאזו 'Ðנננננ'" << endl;
}
