/*6. Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   int i = 100;
    int suma = 0;

   while (i <= 200)
   {
   
    suma = suma + i;
    i=i+2;
   }
   
    
    cout << "El resultado de la suma es: " << suma << endl;


    return 0;
}

