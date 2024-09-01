#include <iostream>

using namespace std;

int menu2x2(int matrixA[2][2]);
int menu3x3(int matrixA[3][3]);
int menu4x4(int matrixA[4][4]);

int get2x2()
{   

    int matrix[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingresa el elemento de la matriz la posición " << i << "," << j << ":" << endl;
            cin >> matrix[i][j];
        }
    }

    cout << "La matriz es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    menu2x2(matrix);

    return 0;
}

int get3x3(){
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa el elemento de la matriz la posición " << i << "," << j << ":" << endl;
            cin >> matrix[i][j];
        }
    }

    cout << "La matriz es la siguiente: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    menu3x3(matrix);

    return 0;

}

int get4x4(){
    int matrix[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Ingresa el elemento de la matriz la posición " << i << "," << j << ":" << endl;
            cin >> matrix[i][j];
        }
    }

    cout << "La matriz es la siguiente: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    menu4x4(matrix);

    return 0;
}

int mainMenu(){
    cout<<"¿Con qué tipo de matrices deseas operar?"<<endl;
    cout<<"1. 2x2"<<endl<<"2. 3x3"<<endl<<"3. 4x4"<<endl<<"4. Cerrar el programa"<<endl;

    int choose = 0;

    cin>>choose;

    switch (choose)
    {
    case 1:
        get2x2();
        break;
    case 2:
        get3x3();
        break;
    case 3:
        get4x4();
        break;
    case 4:
        cout<<"Cerrando... ¡Hasta pronto!"<<endl;
        break;
    default:
        cout<<"Valor inválido, vuelve a intentar."<<endl;
        mainMenu();
        break;
    }

    return 0;
}

int add2x2(int matrixA[2][2])
{
    int matrixB[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    cout << "La segunda matriz es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La suma de matrices es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixA[i][j] + matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int subs2x2(int matrixA[2][2])
{
    int matrixB[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    cout << "La segunda matriz es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La resta de matrices es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixA[i][j] - matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int scalar2x2(int matrixA[2][2])
{

    int scalar = 0;
    cout << "Ingresa el escalar por el cual vas a multiplicar la matriz" << endl;
    cin >> scalar;

    cout << "La matriz es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixA[i][j] * scalar << " ";
        }
        cout << endl;
    }
    return 0;
}

int mult2x2(int matrixA[2][2])
{

    int matrixB[2][2];
    int finalMatrix[2][2] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                finalMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "La matriz final es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << finalMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int trans2x2(int matrixA[2][2])
{

    cout << "La matriz final es la siguiente: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixA[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

int det2x2(int matrixA[2][2])
{

    int det = (matrixA[0][0] * matrixA[1][1]) - (matrixA[0][1] * matrixA[1][0]);

    cout << "El determinante de la matriz es: " << det << endl;

    return det;

    return 0;
}

int inv2x2(int matrixA[2][2]) {
    float newMatrixA[2][2];
    newMatrixA[0][0] = (float)matrixA[0][0]; 
    newMatrixA[0][1] = (float)matrixA[0][1]; 
    newMatrixA[1][0] = (float)matrixA[1][0]; 
    newMatrixA[1][1] = (float)matrixA[1][1]; 

    float matrixB[2][2];
    matrixB[0][0] = newMatrixA[1][1];
    matrixB[0][1] = -newMatrixA[0][1];
    matrixB[1][0] = -newMatrixA[1][0];
    matrixB[1][1] = newMatrixA[0][0];

    float scalar = 1.0 / (((newMatrixA[0][0] * newMatrixA[1][1])) - (newMatrixA[1][0] * newMatrixA[0][1]));

    cout << "La matriz inversa es: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixB[i][j] * scalar << " ";
        }
        cout << endl;
    }

    return 0;
}

int menu2x2(int matrixA[2][2])
{

    int choose = 0;

    cout << "Ingresa la operación que quieres realizar: " << endl;
    cout << "1. Sumar dos matrices." << endl;
    cout << "2. Restar dos matrices. " << endl;
    cout << "3. Multiplicar una matriz por un escalar. " << endl;
    cout << "4. Multiplicar dos matrices. " << endl;
    cout << "5. Hallar la transpuesta de una matriz " << endl;
    cout << "6. Hallar el determinante de una matriz. " << endl;
    cout << "7. Hallar la inversa de una matriz " << endl;
    cout << "8. Salir al menú principal " << endl;

    cin >> choose;

    switch (choose)
    {
    case 1:
        add2x2(matrixA);
        menu2x2(matrixA);
        break;

    case 2:
        subs2x2(matrixA);
        menu2x2(matrixA);
        break;

    case 3:
        scalar2x2(matrixA);
        menu2x2(matrixA);
        break;

    case 4:
        mult2x2(matrixA);
        menu2x2(matrixA);
        break;

    case 5:
        trans2x2(matrixA);
        menu2x2(matrixA);
        break;

    case 6:
        det2x2(matrixA);
        menu2x2(matrixA);
        break;

    case 7:
        if (det2x2(matrixA) == 0)
        {
            cout << "Inválido. No se puede hallar la matriz inversa a una cuyo determinante es 0" << endl;
        }
        else
        {
            inv2x2(matrixA);
        }
        menu2x2(matrixA);
        break;
    case 8:
        cout<<"Saliendo..."<<endl;
        mainMenu();
    break;

    default:
        cout << "Valor inválido. Intente de nuevo" << endl;
        menu2x2(matrixA);
        break;
    }

    return 0;
}

int add3x3(int matrixA[3][3]){
    
    int matrixB[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    cout << "La segunda matriz es la siguiente: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La suma de matrices es la siguiente: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixA[i][j] + matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int subs3x3(int matrixA[3][3]){
    
    int matrixB[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    cout << "La segunda matriz es la siguiente: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La resta de matrices es la siguiente: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixA[i][j] - matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int scalar3x3(int matrixA[3][3])
{

    int scalar = 0;
    cout << "Ingresa el escalar por el cual vas a multiplicar la matriz" << endl;
    cin >> scalar;

    cout << "La matriz es la siguiente: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixA[i][j] * scalar << " ";
        }
        cout << endl;
    }
    return 0;
}

int mult3x3(int matrixA[3][3])
{

    int matrixB[3][3];
    int finalMatrix[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                finalMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "La matriz final es la siguiente: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << finalMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int menu3x3(int matrixA[3][3])
{

    int choose = 0;

    cout << "Ingresa la operación que quieres realizar: " << endl;
    cout << "1. Sumar dos matrices." << endl;
    cout << "2. Restar dos matrices. " << endl;
    cout << "3. Multiplicar una matriz por un escalar. " << endl;
    cout << "4. Multiplicar dos matrices. " << endl;
    cout << "5. Salir al menú principal " << endl;

    cin >> choose;

    switch (choose)
    {
    case 1:
        add3x3(matrixA);
        menu3x3(matrixA);
        break;

    case 2:
        subs3x3(matrixA);
        menu3x3(matrixA);
        break;

    case 3:
        scalar3x3(matrixA);
        menu3x3(matrixA);
        break;

    case 4:
        mult3x3(matrixA);
        menu3x3(matrixA);
        break;

    case 5:
        cout<<"Saliendo..."<<endl;
        mainMenu();
        break;

    default:
        cout << "Valor inválido. Intente de nuevo" << endl;
        menu3x3(matrixA);
        break;
    }

    return 0;
}

int add4x4(int matrixA[4][4]){
    
    int matrixB[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    cout << "La segunda matriz es la siguiente: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La suma de matrices es la siguiente: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrixA[i][j] + matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int subs4x4(int matrixA[4][4]){
    
    int matrixB[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    cout << "La segunda matriz es la siguiente: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La resta de matrices es la siguiente: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrixA[i][j] - matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int scalar4x4(int matrixA[4][4])
{

    int scalar = 0;
    cout << "Ingresa el escalar por el cual vas a multiplicar la matriz" << endl;
    cin >> scalar;

    cout << "La matriz es la siguiente: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrixA[i][j] * scalar << " ";
        }
        cout << endl;
    }
    return 0;
}

int mult4x4(int matrixA[4][4])
{

    int matrixB[4][4];
    int finalMatrix[4][4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Ingresa el elemento de la sengunda matriz en la posición " << i << "," << j << ":" << endl;
            cin >> matrixB[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                finalMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "La matriz final es la siguiente: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << finalMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int menu4x4(int matrixA[4][4])
{

    int choose = 0;

    cout << "Ingresa la operación que quieres realizar: " << endl;
    cout << "1. Sumar dos matrices." << endl;
    cout << "2. Restar dos matrices. " << endl;
    cout << "3. Multiplicar una matriz por un escalar. " << endl;
    cout << "4. Multiplicar dos matrices. " << endl;
    cout << "5. Salir al menú principal " << endl;

    cin >> choose;

    switch (choose)
    {
    case 1:
        add4x4(matrixA);
        menu4x4(matrixA);
        break;

    case 2:
        subs4x4(matrixA);
        menu4x4(matrixA);
        break;

    case 3:
        scalar4x4(matrixA);
        menu4x4(matrixA);
        break;

    case 4:
        mult4x4(matrixA);
        menu4x4(matrixA);
        break;

    case 5:
        cout<<"Saliendo..."<<endl;
        mainMenu();
        break;

    default:
        cout << "Valor inválido. Intente de nuevo" << endl;
        menu4x4(matrixA);
        break;
    }

    return 0;
}

int main(){
    cout<<"¡Bienvenido o Bienvenida a la calculadora de matrices!"<<endl;
    mainMenu();
    return 0;
}