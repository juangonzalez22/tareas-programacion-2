#include <iostream>
#include <vector>

using namespace std;

int main()
{

    cout << "EJERCICIO 1" << endl;
    cout << "Escribe un programa en C++ que cree un vector de enteros y lo inicialice con los numeros del 1 al 10 utilizando inicialización uniforme. Imprime el vector resultante" << endl;

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }

    cin.get();
}