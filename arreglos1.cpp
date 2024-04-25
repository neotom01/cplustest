/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de arreglos

#include <iostream>
using namespace std;
 
int main()
{
    int numero[5] =       // Un array de 5 números enteros
        {200, 150, 100, -50, 300};
    int suma;             // Un entero que guardará la suma
    int i;                // Para recorrer el array
 
    suma = 0;             // Valor inicial 
    for (i=0; i<=4; i++)  // Y hallar la suma
        suma += numero[i];
 
    cout << "Su suma es " << suma;            
    return 0;
}
