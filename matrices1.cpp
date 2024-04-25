/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de matrices
#include <iostream>
using namespace std;
 
int main() 
{   int suma[3][3]; //matriz entera de 3x3
    int i, j; //indices enteros
    int matriz1[3][3] = //asignacion de valores de matriz 1 de 3x3
        { 
            {34, 76, 45},
            {10, 22, 90},
            {56, 67, 11}
        }; 
    int matriz2[3][3] = //asignacion de valores de matriz 2 de 3x3
        { 
            {44, 59, 28},
            {3, 41, 58},
            {29, 2, 73}
        }; 
    cout << "La suma de matrices:\n ";
        
        for (i=0; i<3; i++) { //se recorre matriz en una dimension
        	for (j=0; j<3; j++){ //se recorre matriz en otra dimension
        	suma[i][j] = matriz1[i][j] + matriz2[i][j];	//la matriz suma va adicionando los valores de las otras dos matrices
        	cout << "(" << i <<"," << j << "):{" << "["<< matriz1[i][j] <<"] + [" <<  matriz2[i][j] <<"] " <<"= [" << suma[i][j] << "]} "; //se imprimen valores
			}
			cout << "\n";
		}
 
    return 0;
}
