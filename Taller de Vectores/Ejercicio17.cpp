#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "EJERCICIO 17" << endl;
    cout << "Crea un vector y utiliza erase para eliminar el tercer elemento. Imprime el vector antes y después de la eliminación." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "El siguiente es el vector antes de la eliminación" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.erase(v.begin() + 2);
    cout << "El siguiente es el vector después de la eliminación" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cin.get();
}