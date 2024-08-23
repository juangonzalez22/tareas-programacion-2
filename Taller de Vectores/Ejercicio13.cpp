#include <iostream>
#include <vector>

using namespace std;

int main()
{
    float n;
    float total;
    float average;
    cout << "EJERCICIO 13" << endl;
    cout << "Dado un vector de enteros, calcula y muestra la media de sus elementos." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<float> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        total = total + v[i];
    }

    average = total / n;

    cout << "La media de los elementos del vector es: " << average << endl;

        cin.get();
}