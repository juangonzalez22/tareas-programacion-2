#include <iostream>

using namespace std;

int main()
{

    int x1, x2, y1, y2;

    int result = 0;

    cout << "Ingrese el primer limite del primer intervalo: ";
    cin >> x1;

    cout << "Ingrese el segundo limite del primer intervalo: ";
    cin >> x2;

    cout << "Ingrese el primer limite del segundo intervalo: ";
    cin >> y1;

    cout << "Ingrese el segundo limite del segundo intervalo: ";
    cin >> y2;

    if (-1000 <= x1 && x1 <= 1000 && -1000 <= x2 && x2 <= 1000 &&
        -1000 <= y1 && y1 <= 1000 && -1000 <= y2 && y2 <= 1000)
    {
        cout << "Los intervalos son" << endl
             << "[" << x1 << " ," << x2 << "] y [" << y1 << " ," << y2 << "]" << endl;

        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {

                if (i == j)
                {
                    result++;
                }
            }
        }

        if (result > 0)
        {
            cout << "1. Si comparten numeros";
        }
        else
        {
            cout << "0. No comparten numeros";
        }
    }
    else
    {
        cout << "ERROR. Datos fuera de rango";
    }
}