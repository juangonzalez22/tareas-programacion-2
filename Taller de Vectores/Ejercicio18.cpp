#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int x;
    int y;

    struct Coordinate
    {
        int x;
        int y;
    };

    cout << "EJERCICIO 18" << endl;
    cout << "Crea un vector de un tipo de dato struct que represente un punto en el plano con coordenadas x e y. Añade algunos puntos al vector e imprime las coordenadas de cada punto." << endl;

    cout << "Ingresa el número de coordenadas que tendrá el vector: ";
    cin >> n;

    vector<Coordinate> v;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor X en la posición " << i + 1 << ": ";
        cin >> x;
        cout << "Ingresa el valor Y en la posición " << i + 1 << ": ";
        cin >> y;
        v.push_back({x, y});
    }

    cout << "Coordenadas de los puntos:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Punto " << i + 1 << ": " << endl
             << v[i].x << " " << v[i].y << endl;
        cout << endl;
    }

    cin.get();
}
