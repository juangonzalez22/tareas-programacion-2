#include <iostream>
#include <vector>

using namespace std;

int main()
{

	cout << "EJERCICIO 4" << endl;
	cout << "Crea un vector de 5 elementos enteros. Utiliza un bucle para modificar cada elemento del vector para que sea el doble de su indice. Imprime el vector resultante." << endl;

	vector<int> v = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++)
	{
		v[i] = i * 2;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << v[i] << " ";
	}

	cin.get();
}