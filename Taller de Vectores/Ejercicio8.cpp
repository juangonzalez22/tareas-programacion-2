#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int bigger;
    cout << "EJERCICIO 8" << endl;
    cout << "Dado un vector de enteros, escribe un programa que encuentre y muestre el valor maximo dentro del vector." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector" << endl;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
        cout << endl;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (bigger <= v[i])
        {
            bigger = v[i];
        }
    }

    cout << "El valor mas grande en el vector es: " << bigger << endl;
    cin.get();
}