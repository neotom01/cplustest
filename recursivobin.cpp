#include <iostream> 
#include <string>
using namespace std;

int acum=0; //variable global
string valores; //variable global

void elbinario(int); //prototipo función

int main() //bloque main inicia
{ 
int numero; //variable bloque main entero

cout << "ingresa numero: "; //se solicita numero
cin >> numero; //se guarda numero
cout << endl;
elbinario(numero); //se invoca función elbinario() se pasa dato numero

return 0; //concluye programa
} 

void elbinario(int eldato){ //se recibe dato

	int div, resto; //enteros de funcion
	string s; //string auxiliar
    
    if(eldato >= 2){ //si dato recibido >2
     div = eldato/2; //parte entera de division
	 resto = eldato%2; //resto de division
	}else{
	 resto = eldato; //se toma el valor como resto
	}
	s = to_string(resto); //convertir numero a string
	valores += s; //se agrega el string al valor string grande
	++acum;  //aumenta acum referencia
	
	if(div >= 1 ){ //si valor entero de div >=1 se usa recursion
		elbinario(div);  //funcion llamandose a si misma
	}else{ //si resultado division < 1
		//se muestra el binario obtenido en presentacion se alinea exponente y la base 2
	cout << "BIN"; for (int i=acum-1; i >= 0; i--) cout << " " << valores[i] << " ";	
	cout << endl ;
	cout << "***"; for (int i=0; i < acum; i++) cout << "___";	
	cout << endl;
	cout << "exp"; for (int i=acum-1; i >= 0; i--) cout << " " << i << " ";
	cout << endl;
	cout << "baC";for (int i=0; i < acum; i++) cout << " 2 ";	
	}
	//se muestra
	//BIN #numero binario, si es 1 se eleva la base al exponente listado debajo, si es 0 no se opera
	// exp exponente al cual hay que elevar la base
	//baC o base en este caso 2	  
}
