#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "EJERCICIO 10" << endl;
    cout << "Utiliza push_back y pop_back para crear un nuevo vector que sea el inverso de un vector dado. Imprime el vector resultante." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);
    vector<int> w;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        w.push_back(v.back());
        v.pop_back();
    }

    for (int i = 0; i < w.size(); i++)
    {
        cout << w[i] << " ";
    }
    cout << endl;
}
