#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n;
   cout << "EJERCICIO 3" << endl;
   cout << "Dado un vector de enteros inicializado, escribe un programa que calcule y muestre la suma de todos sus elementos." << endl;

   cout << "¿Cuantos elementos tendra el vector?" << endl;
   cin >> n;

   vector<int> v(n);

   int total = 0;

   for (int i = 0; i < n; i++)
   {
      cout << "Ingresa el valor en la posicion " << i + 1 << ": ";
      cin >> v[i];
      cout << endl;
   }

   for (int i = 0; i < n; i++)
   {
      cout << v[i] << " ";
   }

   for (int i = 0; i < n; i++)
   {
      total = total + v[i];
   }
   cout << total;
   cin.get();
}