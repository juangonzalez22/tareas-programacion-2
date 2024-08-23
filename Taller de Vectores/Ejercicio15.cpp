#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int m;
    cout << "EJERCICIO 15" << endl;
    cout << "Crea un vector y modifica su tamaño con resize. Imprime su tamaño y capacidad antes y después de la modificacion para observar los cambios." << endl;

    cout << "Ingresa el numero de elementos que tendra el vector: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "Ingresa el nuevo numero de elementos que tendra el vector: ";
    cin >> m;

    cout << "Antes del cambio, el tamaño y la capacidad del vector son de " << v.size() << " y " << v.capacity() << endl;
    v.resize(m);
    cout << "Después del cambio, el tamaño y la capacidad del vector son de " << v.size() << " y " << v.capacity() << endl;

    cin.get();
}