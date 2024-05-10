/*8.Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int vector1[1000];
    int vector2[1000];
    int producto = 0;
    int i = 0;
    int N = 0;

  cout << "ingrese la longitud de los vectores" << endl;
  cin >> N;
    
   
   while (i < N)
   {
        cout << "Vector 1" << endl;
        cout << "Agrega un numero al vector: " << endl;
        cin >> vector1[i];
        i++;
   }
   
   i = 0;
    
    while (i < N)
   {
    cout << "Vector 2" << endl;
        cout << "Agrega un numero al vector: " << endl;
        cin >> vector2[i];
        i++;
   }
    
    
    i = 0;
   
    while (i < N)
   {
    cout << endl;
    producto+=vector1[i]*vector2[i];
    i++;
   }
    cout << "El producto punto de los vectores es: " << producto << endl;
    return 0;
}
