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

        Animal* animal = new Bird("������");
        animal->Eat();
        animal->Drink();
        animal->Go();
        animal->Sound();

        cout << endl;

        animal = new Mammal("����");
        animal->Eat();
        animal->Drink();
        animal->Go();
        animal->Sound();

        cout << endl;

        animal = new Bat("�����");
        animal->Eat();
        animal->Drink();
        animal->Go();
        animal->Sound();

        delete animal;

        return 0;
 
}