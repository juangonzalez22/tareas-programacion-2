#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "EJERCICIO 20" << endl;
    cout << "Escribe un programa que lea n números del usuario (donde n es también ingresado por el usuario) y los almacene en un vector. Después, imprime los números en orden inverso." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    for (int i = v.size(); i > 0; i--)
    {
        cout << v[i - 1] << " ";
    }

    cin.get();
}