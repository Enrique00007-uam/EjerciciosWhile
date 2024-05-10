/*3. Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int suma;
    int i =1;
   while (i <= 100)
   {
    suma = suma + i * i;
    i++;
   }
   
 cout << "El resultado de la suma de los cuadrados de los numeros entre 1 y 100 es: " << suma;
    
    return 0;
}

