#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "EJERCICIO 5" << endl;
    cout << "Repite el ejercicio anterior, pero utilizando el metodo .at() para modificar los elementos del vector. Asegurate de capturar y manejar cualquier excepcion que pueda ocurrir." << endl;

    vector<int> v = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        v.at(i) = i * 2;
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << v[i] << " ";
    }

    cin.get();
}
