#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    int m;
    cout << "EJERCICIO 16" << endl;
    cout << "Dado un vector, utiliza insert para añadir un elemento dado en la tercera posición. Imprime el vector antes y después de la inserción." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }
    cout << "Ingresa el numero que quedara en la posicion 3: ";
    cin >> m;

    v.insert(v.begin() + 2, m);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cin.get();
}