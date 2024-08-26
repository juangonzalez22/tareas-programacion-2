#include <iostream>

using namespace std;

int main(){

    float num1, num2;

    char operacion;

    cout<<"Digita el primer numero: ";
    cin>>num1;
    cout<<"Digita el segundo resultado: ";
    cin>>num2;

    cout<<"Elije la operacion a realizar"<<endl;
    cout<<"+. Suma"<<endl<<"-. Resta"<<endl<<"*. Multiplicacion"<<endl<<"/. Division"<<endl;

    cin>>operacion;

    switch (operacion)
    {
    case '+':
        cout<<"La suma de "<<num1<<" y "<<num2<<" es: "<< num1 + num2<<endl;
        break;
    
    case '-': cout<<"La resta de "<<num1<<" y "<<num2<<" es: "<< num1 - num2<<endl;
        break;

    case '*': cout<<"La multiplicacion de "<<num1<<" y "<<num2<<" es: "<< num1 * num2<<endl;
        break;

    case '/': if(num2 == 0){
        cout<<"ERROR. No existe la division entre 0"<<endl;
        }
        else{
            cout<<"La division de "<<num1<<" y "<<num2<<" es: "<< num1 / num2<<endl;
        }

        break;
    default:
    cout<<"Invalido. No se seleccionó ninguna operacion"<<endl;
    break;
    }


    cin.get();



}