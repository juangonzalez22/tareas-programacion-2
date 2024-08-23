#include <iostream>
#include <vector>

using namespace std;

int main()
{

    cout << "EJERCICIO 7" << endl;
    cout << "Crea un vector y añade elementos del 1 al 10 uno a uno. Después de cada adición, imprime el size() y capacity() del vector para observar cómo cambian" << endl;

    vector<int> v = {};

    for (int i = 0; i < 10; i++)
    {
        cout << "Iteracion #" << i << ":" << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        cout << "v.size: " << v.size() << endl;
        cout << "v.capacity(): " << v.capacity() << endl;
        cout << endl;
        v.push_back(i + 1);
    }

    cin.get();
}