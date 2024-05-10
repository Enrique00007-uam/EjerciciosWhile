/*1. Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento*/



#include <iostream>

using namespace std;

int suma(int num);

int main(int argc, char const *argv[])
{
    int num = 1;
    cout << "Ingrese el numero del que desea calcular la suma: "  << endl;
    cin >> num;
    suma(num);
    return 0;
}

int suma(int num) {
    int i = 1;
    int suma = 0; 
    while (i <= num) {
        suma = suma + i;
        i++;
    }
    cout << "La suma del 1 hasta el numero dado es: " << suma;
}
