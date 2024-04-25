/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de ciclos do...while

#include <iostream>
using namespace std;
 
int main()
{
    int valida = 711;
    int clave;
 
    do  //empezar a realizar las instrucciones
    {
        cout << "Introduzca su clave numerica: ";
        cin >> clave;
        if (clave != valida) //si clave es diferente de valida (y esta vale 711)
            cout << "No valida!" << endl;
    }
    while (clave != valida); //mientras que clave sea diferente de valida
 
    cout << "Aceptada." << endl;
    return 0;
}
