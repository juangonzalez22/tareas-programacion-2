#include <iostream>

using namespace std;

int main (){

    int a, b, c;

    int distanceA, distanceB;

    cout << "Digite la posicion del primer gato: ";
    cin>>a;

    cout << "Digite la posicion del segundo gato: ";
    cin>>b;

    cout << "Digite la posicion del raton: ";
    cin>>c;

    distanceA = a - c;

    if(distanceA < 0){
        distanceA = distanceA * -1;
    }

    distanceB = b - c;

    if(distanceB < 0){
        distanceB = distanceB * -1;
    }

    if(distanceA > distanceB){
        cout<<"El gato A ha alcanzado el raton.";
    }
    else if (distanceB > distanceA){
        cout<<"El gato B ha alcanzado el raton.";
    }
    else if (distanceB == distanceA){
        cout<<"El ratón ha escapado";
    }

}