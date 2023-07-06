#include "Bird.h"

Bird::Bird(const string& name):Animal(name){}

void Bird::Sound() const
{
	cout << name<<" каже 'Чирик'" << endl;
}
