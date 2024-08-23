#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "EJERCICIO 10" << endl;
    cout << "Crea un vector y añádele algunos elementos. Utiliza el método clear para vaciarlo completamente y muestra el tamaño del vector después de vaciarlo." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Antes de usar el comando, el tamaño del vector es de: " << v.size() << endl;
    v.clear();
    cout << "Al usar el comando, el tamaño del vector ahora es de: " << v.size() << endl;

        cin.get();
}