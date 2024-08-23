#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "EJERCICIO 19" << endl;
    cout << "Dado un vector de enteros, utiliza un bucle para imprimir mayor si un elemento es mayor que el siguiente y menor en caso contrario. Para el último elemento, imprime utlimo" << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
        {
            cout << "Ultimo" << endl;
        }
        else
        {
            if (v[i] > v[i + 1])
            {
                cout << "Mayor" << endl;
            }
            else
            {
                cout << "Menor" << endl;
            }
        }
    }

    cin.get();
}