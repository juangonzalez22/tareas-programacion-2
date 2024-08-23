#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "EJERCICIO 6" << endl;
    cout << "Escribe un programa que imprima los elementos de un vector, utilizando un bucle for que se base en el tamaño del vector obtenido con el método .size()." << endl;

    cout << "¿Cuantos elementos tendra el vector?" << endl;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
        cout << endl;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cin.get();
}