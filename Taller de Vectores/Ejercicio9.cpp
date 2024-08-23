#include <iostream>
#include <vector>

using namespace std;

int main()
{

    cout << "EJERCICIO 9" << endl;
    cout << "Crea un vector y añádele algunos elementos. Luego, elimina el último elemento usando pop_back. Imprime el vector antes y después de la eliminación." << endl;
    int n;
    cout << "Ingresa el numero de elementos que tendra el vector" << endl;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
        cout << endl;
    }

    cout << "Este es el vector antes de ejecutar la funcion pop_back: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Este es el vector despues de ejecutar la funcion pop_back: " << endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cin.get();
}
