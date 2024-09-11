#include <iostream>

#include <vector>

using namespace std;

int main()
{

    cout << "Ingresa la cantidad de digitos que tiene el boleto: " << endl;

    int length = 0;
    cin >> length;

    int num1 = 0;
    int num2 = 0;

    for (int i = 0; i < length / 2; i++)
    {
        cout << "Ingresa el dígito numero " << i + 1 << ":" << endl;
        int next = 0;
        cin >> next;
        num1 = num1 + next;
    }

    for (int i = length / 2; i < length; i++)
    {
        cout << "Ingresa el dígito numero " << i + 1 << ":" << endl;
        int next = 0;
        cin >> next;
        num2 = num2 + next;
    }

    cout << num1;

    if (num1 == num2 && length % 2 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
