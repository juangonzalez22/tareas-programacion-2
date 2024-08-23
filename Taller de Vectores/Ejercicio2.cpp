#include <iostream>
#include <vector>

using namespace std;

int main()
{

	cout << "EJERCICIO 2" << endl;
	cout << "Utiliza un vector vacio e implementa un bucle que utilice la función push_back para anadir los numeros del 1 al 5. Imprime el vector final." << endl;

	vector<int> v;
	for (int i = 0; i <= 4; i++)
	{
		v.push_back(i + 1);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << v[i] << " ";
	}

	cin.get();
}