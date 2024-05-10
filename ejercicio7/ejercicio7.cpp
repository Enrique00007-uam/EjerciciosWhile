/*7. Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int vector1[1000];
    int vector2[1000];
    int vector3[1000];
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
    vector3[i]=vector1[i]+vector2[i];
    cout << vector3[i] << endl;
        i++;
   }

    return 0;
}
