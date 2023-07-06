#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Bat.h"
#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

        Animal* animal = new Bird("Синиця");
        animal->Eat();
        animal->Drink();
        animal->Go();
        animal->Sound();

        cout << endl;

        animal = new Mammal("Тигр");
        animal->Eat();
        animal->Drink();
        animal->Go();
        animal->Sound();

        cout << endl;

        animal = new Bat("Кажан");
        animal->Eat();
        animal->Drink();
        animal->Go();
        animal->Sound();

        delete animal;

        return 0;
 
}