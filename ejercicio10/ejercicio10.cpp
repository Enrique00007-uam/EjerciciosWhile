/*10. Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/ 

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int transpuesta[3][3];

    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "Escribe el numero en la fila " << i+1 << ", columna " << j+1 << ": ";
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            transpuesta[j][i] = matriz[i][j];
            j++;
        }
        i++;
    }

    cout << "La matriz transpuesta es:" << endl;
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << transpuesta[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
