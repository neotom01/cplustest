/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de punteros
#include <iostream>
using namespace std;

int main()
{
int numeros[5]={22,58,10,8,44}; //arreglo
int *apuntador=numeros; //puntero, apunta al arreglo

cout << "numeros[]:{";
for(int i=0; i<5 ;i++) cout <<numeros[i] << " ";
cout << "}\n";

cout <<"direccion:(" << apuntador+0 << "): " << *(apuntador+0) << endl; //1er numero
cout <<"direccion:(" << apuntador+1 << "): " << *(apuntador+1) << endl; //2do numero
cout <<"direccion:(" << apuntador+2 << "): " << *(apuntador+2) << endl; //3er numero
cout <<"direccion:(" << apuntador+3 << "): " << *(apuntador+3) << endl; //4to numero
cout <<"direccion:(" << apuntador+4 << "): " << *(apuntador+4) << endl; //5to numero
    return 0;
}
