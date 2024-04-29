/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de diversos temas: condicionales, punteros, matrices, arrays, aleatorios, funciones
//un programa que genera aleatorios (se puede ingresar numeros) para participantes, se asigna premio segun cantidad ingresada

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define PART 10 //se define num de participantes
#define NUMS 8 //se define cantidad de numeros por participante
#define MAXRND 40 // se define el valor limite de los num que se generan random

using namespace std;
int valor=0; //se inicia en 0
int* listaentera(); //funcion para ingresar numeros
int* listarand(); //funcion genera numeros
int* sorteo(); //funcion para sorteo
int buscarElemento(int,int,int); //se buscan numeros de participantes en numeros ganadores
int participan[PART][NUMS]; //matriz de participantes
int ganador[NUMS], puntajes[PART]; //lista de aciertos de participantes y de num ganadores
int boletos = 0; //boletos/participantes
int ronda=0, revision=0; //sorteo
double premio, parte; //premio y parte de premio a ganadores

bool checkrep(int n, int num[]) //se verifica que no haya repetidos en numeros random
{
	bool valor =  false; //valor inicial 
	
    for(int i=0; i<NUMS; i++){ //ciclo para revisar si existe un numero en un arreglo
        if(n == num[i]){
          valor = true;	 //cambia valor
		}
	}
	
    return valor;      //se devuelve valor  
}


int main() 
{ 
    char opc, entra; //opciones
	int* ptr; //se tiene direccion de puntero
	int i,j,k; //variable ciclos

do{ //inicio do while
    cout << endl;
	cout<< (char)186<< PART-boletos <<" BOLETOS DISPONIBLES"<<endl; //boletos libres
    cout << (char)201;
    for(int k=0;k<100;k++){cout << (char)205;} cout<<"\n"; //se muestra menu
	cout<< (char)186<<"Menu:"<<endl;

	cout<< (char)186<<"a.Entrar a sorteo"<<endl;
	cout << (char)186<<"b.Iniciar sorteo"<<endl;
	cout << (char)186<<"c. Mostrar resultados" <<endl;
	cout << (char)186<<"d. Reiniciar" <<endl;
	cout << (char)186<< "q. Salir" <<endl;
	cout<< (char)200;
			   	for(j=0;j<100;j++){
		       	cout << (char)205; 
			   }
	cout <<endl;
	cout << (char)186<< "Opcion: "<<endl; //se guarda opcion de menu
	cin >> opc;
	
	if(opc == 'a' || opc == 'A'){ //si opcion es A

	    if(boletos < PART){ //si hay boletos se inicia
		   cout << (char)204;
		   for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
		   cout << (char)186<< "BOLETO: "<< boletos+1 <<endl; //sub menu para ingresar numeros o generarlos
	    	cout << (char)186<< "Opciones:" <<endl;
	    	cout << (char)186<< "i. ingresar numeros" <<endl;
		    cout << (char)186<< "j. generar numeros" <<endl;
		    cout << (char)186<< "k. cancelar" <<endl;
		    cout << (char)186<< "Opcion: "<<endl;
		    cin >> entra; //se tiene una opcion
		
		    if(entra=='i' ||entra=='I'){ //opcion ingresar numeros
			
			
				cout << (char)204;
		      for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
			   ptr = listaentera(); //se invoca función para guardar numeros
	           cout<< (char)186<<"Numeros son: "<<endl;
	           cout<< (char)186;
	           
	           for(i=0 ; i<NUMS; i++){ //se muestran numeros ingresados
	           cout<< i+1 <<".-[ " <<ptr[i]<<" ] "; //se muestran numeros
	           participan[boletos][i]=ptr[i];
	           }
	           cout << endl;
	           ++boletos; //aumento num boleto
	           cout << endl;
	           


		    }else if(entra=='j' || entra=='J'){ //si se generan numeros random
			
			  cout << (char)204;
			
		       for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
			   ptr = listarand(); //se invoca funcion para generar numeros
			   cout << (char)186;
	           cout<<"Numeros son: "<<endl;
	           cout << (char)186; //se muestra numeros participantes random
	           for(i=0 ; i<NUMS; i++){
	           cout<< i+1 <<".-[ " << ptr[i]<<" ] "; //se muestran numeros
	            participan[boletos][i]=ptr[i];
			     }
			    cout <<endl;
			    ++boletos; //aumento num boleto
			    cout << endl;

		    }else{
			
				for(k=0;k<100;k++){cout << (char)178;} cout<<"\n"; //aviso cancelacion boleto
				cout<< (char)186<<"Boleto No Registrado "<<endl;
			
		    }
		
		}else{
				for(k=0;k<100;k++){cout << (char)178;} cout<<"\n"; //aviso sin boletos
				cout<< (char)186<<"BOLETOS AGOTADOS "<<endl;
			}	
		
	}else if(opc == 'b' || opc == 'B'){ //se indica que se inicia sorteo
		      
		      if(ronda < 1){ //si aun no se ha hecho un sorteo se inicia
		      	
		      	cout << (char)204;
		      for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
		       if(boletos >=1){ //se solicita monto total de premios
                cout <<"Ingrese monto de premio (solo numeros):"<<endl;
		       	cin >> premio;
		       	cout << (char)201;
		       for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
		       cout<< (char)186<< "SORTEO" <<endl;
		       cout<< (char)186;	    		  
			   for(j=0;j<100;j++){
		       	cout << (char)177; 
			   }
		       cout<< endl;

			   ptr = sorteo(); //se invoca función para sorteo
			   cout << (char)186<<"Monto Total: $"<< premio << endl; //premio
			   cout << (char)186<<"Boletos participantes: "<< boletos << endl;
	           cout<< (char)186<<"Numeros participantes: "<<endl;
	            cout << (char)201;
	            //se muestran los boletos y numeros que participan
		       for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
	           
	           for(i=0 ; i<NUMS; i++){
	           	ganador[i] = ptr[i];
	           cout<< i+1 <<".-[ " <<ptr[i]<<" ] "; //se muestra contenido matriz
	           }
	           cout <<endl;

	           cout<< (char)186<<"F E L I C I D A D E S"  << endl;
	           cout<< (char)186<<"1er premio:" <<premio*0.60  << endl; //calculo premio 1er lugar todos aciertos
	           cout<< (char)200;
			   	for(j=0;j<100;j++){
		       	cout << (char)205; 
			   }
		       cout<< endl;
		       ++ronda;
		       	
			   }else{ //aviso que no hay participantes registrados definir num minimo
			   	cout<<(char)186<<"No hay participantes, no hay sorteo"<<endl;
			   }
		      	
			  }else{ //avisa que un sorteo ya se hizo
			  	cout<<(char)186<<"Sorteo concluido."<<endl;
			  }
		      
		      
		
	}else if(opc == 'c' || opc == 'C'){ //mostrar resultados
		       if(ronda>=1){ //si ya se hizo un sorteo se continua

		       cout << (char)201;
		       for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
		       	cout <<(char)186<< "Numeros participantes" <<endl; //lista de boletos participantes
			   for(i=0 ; i<PART; i++){
			   	cout <<(char)186<< i+1;
			   	for(j=0;j<NUMS;j++){
			   		cout <<" [ "<< participan[i][j] <<" ] ";
				   }
	           cout<< endl;	
	           }
	           //se muestra boleto con numeros ganadores
	           
	           cout << (char)201;
		       for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
	           cout <<(char)186<< "GANADOR" <<endl;
	           
	           if(revision < 1){
	           		for(j=0;j<NUMS;j++){
			   		  cout <<j+1<<": [ "<< ganador[j] <<" ] ";
			   		  for(k=0;k<PART;k++){
			   			  for (i = 0; i < NUMS; i++) {
                               
                               if (participan[k][i] == ganador[j]){ //se comparan los numeros de participantes con ganador
                               	++puntajes[k]; //si hay coincidencia con ganadores se da punto a participantes
							   }
                                           }
					   }
				   }
	           	++revision;
			   }

	           cout<< endl;
	           	cout << (char)201;
		       for(k=0;k<100;k++){cout << (char)205;} cout<<"\n";
			   cout<<(char)186<<"PUNTAJES" <<endl;	//se muestra num boletos y puntajes
	           for(i=0;i<PART;i++){
	           	  if(puntajes[i]==NUMS){ //se asigna premio segun porcentaje de aciertos
	           	  	 parte=premio*0.60;
					 }else if(puntajes[i]>=NUMS*0.70 && puntajes[i]<NUMS){
					  parte=premio*0.20;
					 }else if(puntajes[i]>=NUMS*0.50 && puntajes[i]<NUMS*0.70){
					 	parte=premio*0.08;
					 }else{
					 	parte = 0;
					 }
	           	cout <<(char)186<< i+1 <<":"<< puntajes[i] <<" PREMIO: $"<< parte <<endl; //se muestra num boleto + premio
			   }
	           
			   }else{
			   	cout <<(char)186<< "No se ha realizado sorteo" <<endl; // no se realizo sorteo
			   }

	}else if(opc == 'd' || opc == 'D'){ // se reinicia sorteo
		
		if(ronda > 0){ //si ya se hizo un sorteo se continua
			
			boletos = 0; //en ceros variables principales
	      	ronda = 0;
	     	premio = 0;
		    parte = 0;
		    revision = 0;
	        memset(ganador, 0, NUMS * sizeof(ganador[0]));  //en cero arreglos
	        memset(puntajes, 0, PART * sizeof(puntajes[0]));
	        //en ceros matriz participantes y sus numeros
	         for(i = 0; i < PART; i++) {
               for(int j = 0; j < NUMS; j++) {
                 participan[i][j] = 0; // Set the value to 0
                }
              }
              
	    }else{ //sino se ha hecho sorteo no se hace reinicio
	     cout <<(char)186<< "No se ha realizado sorteo." <<endl;	
		}
		

	}
	
}while(opc!='q' || opc == 'Q'); //se hara mientras no sea q


return 0;
}


int* listaentera() 
{
	static int a[NUMS]; //arreglo estatico
	cout << (char)204;
	for(int k=0;k<100;k++){cout << (char)205;} cout<<"\n";
	cout << "Numeros no se deben repetir (entre 1 y "<<MAXRND<<" )" <<endl;
	for(int i = 0; i<NUMS; i++)
	{   
	    
	    cout << "Ingresa numero " << i+1 << " :"<<endl;
	    cin >> valor; //se guarda numero en arreglo
		a[i] = valor;
	}

	return a; //se regresa arreglo
}

int* listarand() //se tiene direcciones de puntero
{   
    
	static int a[NUMS]; //arreglo estatico
	for(int i = 0; i<NUMS; i++)
	{   
	    srand(time(NULL));
	    do
	        valor = 1 + rand() % MAXRND; //num entre 1 y max definido
	    while(checkrep(valor, a)); //se verifica que ninguno se repita
	    
		a[i] = valor; //se ingresa valor

	}

	return a; //se devuelve arreglo
}

int* sorteo(){
	
	static int a[NUMS]; //array estatico
	for(int i = 0; i<NUMS; i++)
	{   
	    srand(time(NULL)); //generaicon tiempo
	    do
		  valor = 1 + rand() % MAXRND;//num entre 1 y maximo definido
	    while(checkrep(valor, a)); //revision de repeticion en boleto
	    
		a[i] = valor;//se guarda valor generado
	
	}

	return a; //devuelve array
	
}



