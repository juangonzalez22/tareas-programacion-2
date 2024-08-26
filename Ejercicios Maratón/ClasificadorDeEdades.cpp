#include <iostream>

using namespace std;

int main()
{

    int age;

    cout << "Ingrese la edad: ";
    cin >> age;

    if (age < 0 || age > 100)
    {
        cout << "ERROR. La edad esta fuera del rango admitido" << endl;
    }
    else
    {
        if (age > 0 && age <= 14)
        {
            cout << "Niño" << endl;
        }
        else if (age >= 15 && age <= 18)
        {
            cout << "Adolescente" << endl;
        }
        else if (age >= 19 && age <= 100)
        {
            cout << "Adulto" << endl;
        }
    }
}