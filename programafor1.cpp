/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de ciclos for

#include <iostream>
using namespace std;
 
int main() //para calcular tablas de multiplicar del 2 y del 3
{
    int tabla, numero; //variables iniciales
 
    for (tabla=2; tabla<=4; tabla++) //determinar valor inicial y final para ciclo
        for (numero=1; numero<=10; numero++) //determinar subvalores que estaran dentro de ciclos
            cout << tabla <<  " X " <<  numero //se imprime texto tabla
                << " = " << tabla*numero << endl; //se imprime y se multiplican valores
 
    return 0;
}
