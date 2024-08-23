#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "EJERCICIO 12" << endl;
    cout << "Inicializa un vector con los elementos de otro vector existente. Imprime ambos vectores para mostrar que son iguales." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);
    vector<int> w(n);


    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {

        w[i] = v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << w[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < w.size(); i++)
    {
        cout << w[i] << " ";
    }
    cout << endl;


        cin.get();
}