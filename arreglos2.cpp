/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de arreglos dinamicos
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
 srand(time(NULL)); //tiempo de generación de numeros
 int * cadena_dinamica = NULL; // arreglo vacio.
 int cantidad = 0; //dimension del arreglo
 //obtenemos un valor de cantidad capturado de consola
 cout<< "Por favor digite el tamano del arreglo: ";
 cin>>cantidad; //se recibe la dimension del arreglo
 // creamos el arreglo dinámico con el parametro capturado
 cadena_dinamica = new int[cantidad]; //se crea arreglo con tamano indicado
 for (int i=0; i<cantidad; i++){
 	cadena_dinamica[i] = 1 + rand() % (101 - 1); // se generan numeros aleatorios entre 1 y 100
 } 
  for (int i=0; i<cantidad; i++)cout << i+1 << ": " << cadena_dinamica[i] <<endl;
  
delete [] cadena_dinamica; // liberamos la memoria de la cadena
 cadena_dinamica = NULL;

    return 0;
}
