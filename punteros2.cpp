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
int X[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int *ptrX;
int Y, Y2;
  ptrX = X; // ptrX es igual a la dirección del primer elemento de X, X=&X[0]
  Y = *( ptrX + 7 ); //Y tiene el valor del elemento que esta desplazado 7 unidades desde el primer elemento de X
  Y2 = *( X + 7 ); // se suma 7 al primer elemento de X
  cout <<"X[]={";
  for(int i=0; i<15 ; i++){ 
  cout << X[i] <<","; //recorriendo arreglo
  }
  cout << "}\n";
  cout << "X[0]: "<<X[0] << endl; //valor en posicion
  cout << "ptrX: " << ptrX <<endl; //direccion en memoria
  cout << "Y: X[0+7]= "<< Y << endl; //desplazando puntero
  cout << "Y2: X[0]={1+7}: "<< Y2 << endl; //sumando valores de arreglo

    return 0;
}
