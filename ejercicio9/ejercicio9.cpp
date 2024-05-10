/* 9.Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];

    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "Matriz 1" << endl;
            cout <<"Escribe un numero: Fila" << i+1 << ", columna" << j+1 << ":" << endl;
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "Matriz 2" << endl;
            cout <<"Escribe un numero: Fila" << i+1 << ", columna" << j+1 << ":" << endl;
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
              matriz3[i][j] = matriz1[i][0] * matriz2[0][j] + matriz1[i][1] * matriz2[1][j] + matriz1[i][2] * matriz2[2][j];
            j++;
        }
        i++;
    }

    cout << endl;
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << matriz1[i][j];
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << matriz2[i][j];
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << matriz3[i][j] <<  " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
