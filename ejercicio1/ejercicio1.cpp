#include <iostream>

using namespace std;

int suma(int num);

int main(int argc, char const *argv[])
{
    int num = 1;
    cout << "Ingrese el número del que desea calcular la suma: "  << endl;
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
    cout << "La suma del 1 hasta el número dado es: " << suma;
}
