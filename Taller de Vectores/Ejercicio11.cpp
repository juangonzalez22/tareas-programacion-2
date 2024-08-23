#include <iostream>
#include <vector>

using namespace std;

int main()
{

    cout << "EJERCICIO 11" << endl;
    cout << "Dado un vector de enteros, imprime el primer y ultimo elemento del vector utilizando los métodos front() y back()." << endl;

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

    cout<<"El primer y último elemento son: "<<endl<<v.front()<<" "<<v.back()<<endl;

        cin.get();
}