#include <iostream>

using namespace std;

int main(){
    
    int filas;
    int columnas;
    
    
    int initalMatrix[3][4];
    int newMatrix[3][4];
    
    cout<<"Ingrese el número de filas (3)"<<endl;
    cin>>filas;
    
    cout<<"Ingrese el número de columnas (4)"<<endl;
    cin>>columnas;
    cout<<"---------------------------------------"<<endl;
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Ingresa el número en la posicion "<<i<<","<<j<<": "<<endl;
            cin>>initalMatrix[i][j];
        }
    }
    cout<<"---------------------------------------"<<endl;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<initalMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    newMatrix[0][0] = initalMatrix[0][0]+initalMatrix[0][1]+initalMatrix[1][0]+initalMatrix[1][1];
    newMatrix[1][0] = initalMatrix[0][0]+initalMatrix[0][1]+initalMatrix[1][0]+initalMatrix[1][1]+initalMatrix[2][0]+initalMatrix[2][1];
    newMatrix[2][0] = initalMatrix[1][0]+initalMatrix[1][1]+initalMatrix[2][1]+initalMatrix[2][0];
    
    newMatrix[0][1] = initalMatrix[0][0]+initalMatrix[0][1]+initalMatrix[0][2]+initalMatrix[1][0]+initalMatrix[1][1]+initalMatrix[1][2];
    newMatrix[1][1] = initalMatrix[0][0]+initalMatrix[0][1]+initalMatrix[0][2]+initalMatrix[1][0]+initalMatrix[1][1]+initalMatrix[1][2]+initalMatrix[2][0]+initalMatrix[2][1]+initalMatrix[2][2];
    newMatrix[2][1] = initalMatrix[1][0]+initalMatrix[1][1]+initalMatrix[1][2]+initalMatrix[2][0]+initalMatrix[2][1]+initalMatrix[2][2];
    
    newMatrix[0][2] = initalMatrix[0][1]+initalMatrix[0][2]+initalMatrix[0][3]+initalMatrix[1][1]+initalMatrix[1][2]+initalMatrix[1][3];
    newMatrix[1][2] = initalMatrix[0][1]+initalMatrix[0][2]+initalMatrix[0][3]+initalMatrix[1][1]+initalMatrix[1][2]+initalMatrix[1][3]+initalMatrix[2][1]+initalMatrix[2][2]+initalMatrix[2][3];
    newMatrix[2][2] = initalMatrix[1][1]+initalMatrix[1][2]+initalMatrix[1][3]+initalMatrix[2][1]+initalMatrix[2][2]+initalMatrix[2][3];
    
    newMatrix[0][3] = initalMatrix[0][2]+initalMatrix[0][3]+initalMatrix[1][2]+initalMatrix[1][3];
    newMatrix[1][3] = initalMatrix[0][2]+initalMatrix[0][3]+initalMatrix[1][2]+initalMatrix[1][3]+initalMatrix[2][2]+initalMatrix[2][3];
    newMatrix[2][3] = initalMatrix[1][2]+initalMatrix[1][3]+initalMatrix[2][2]+initalMatrix[2][3];
    
    cout<<"---------------------------------------"<<endl;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<newMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
