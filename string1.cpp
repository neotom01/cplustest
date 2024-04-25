/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de de strings y espaciado en arreglos
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    string texto;         // Tamaño de cadena no establecido
    int k;
    
    cout << "Introduce tu nombre: ";
    getline(cin,texto); //se usa getline para guardar cadena
    cout << "Hola " <<  texto << endl;
    for (k=0; k<texto.length(); k++){  //se establece como limite de conteo el valor con texto.length()
    	cout << "[" << k << "]: " << texto[k] << "\n"; //se imprime lo que hay en cada posicion del "arreglo"
	}
    
    return 0;
}

