/*4. Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

int i = 0;
int calificaciones[10];
int calcularPromedio(int c[]);

int main(int argc, char const *argv[])
{
   
   calcularPromedio(calificaciones);

    
    return 0;
}
 
 
 int calcularPromedio(int c[]){
int sumaC;
float promedio;
    while (i < 10)
    {
        cout << "escribe la calificacion: " << i+1 << endl;
        cin >> calificaciones[i];
        sumaC = sumaC + calificaciones[i];
        i++;
    }
    
   promedio = sumaC/10;

    cout << "El promedio general de la clase es: " << promedio;}


