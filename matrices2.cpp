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
{   
    int i, j, k, suma[3][3], acum=0;
    int matriz1[3][3] = 
        { 
            {1, 0, 1},
            {1, 2, 0},
            {1, 0, 1}
        }; 
    int matriz2[3][3] = 
        { 
            {2, 2, 0},
            {0, 1, 1},
            {2, 2, 0}
        }; 
    cout << "La multiplicacion de matrices:\n ";
    
                cout << "Matriz A:\n ";     //presentacion de matriz A
                		for (i=0; i<3; i++) { //se inicia recorrido por matriz
          
        	                  for (j=0; j<3; j++){
					               cout << " " << matriz1[i][j] << " "; //se presenta el elemento
					                             }
					              cout << "\n"; //un salta para separar filas
					                        }
        		cout << "Matriz B:\n ";     //presentacion de matriz B
                		for (i=0; i<3; i++) { //se inicia recorrido por matriz
        		   
        	                  for (j=0; j<3; j++){
					               cout << " " << matriz2[i][j] << " ";//se presenta el elemento
					                             }
					              cout << "\n";//un salto para separar filas
					                        }
        		
        		for (i=0; i<3; i++) {   //se inicia recorrido por matrices
        		   
        	        for (j=0; j<3; j++){
        	         cout << "C[" << i << j <<"]=";
        	         cout << "SUM{";
					 for (k=0; k<3; k++){	
                         //cout << " A(" << i << ")(" << k <<")X"<< "B(" << k << ")(" << j <<") ";
                         cout << " A(" << matriz1[i][k] <<")X"<< "B(" << matriz2[k][j] <<") ";
                         //cout << matriz1[i][k] << matriz2[k][j];
                         if(k == 2){
                         	acum += matriz1[i][k]*matriz2[k][j]; //se suma el producto de los elementos por cada fila de A
                         	suma[i][j] = acum; // se iguala matriz producto con la suma
                         	acum = 0; //se vacia suma para procesar siguiente fila
						 }else{
						    acum += matriz1[i][k]*matriz2[k][j]; //se suma el producto de los elementos por cada fila de A
						 }

        		                    }
                          cout << "}\n";
			                           }
			              cout << "\n";
		                            } 
                cout << "Matriz C:\n "; //matriz resultado
                		for (i=0; i<3; i++) {  //se inicia recorrido por matriz
        		   
        	                  for (j=0; j<3; j++){
					               cout << " " << suma[i][j] << " "; //se presenta cada elemento
					                             }
					              cout << "\n"; //salto para presentar cada fila
					                        }
					                        
    return 0; //fin de codigo
}
