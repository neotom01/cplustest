/*Codigo de prueba y desarrollo de algoritmos por Tomás Orocio
temas basico en algoritmia y matematicas en lenguaje C y C++
      //HHHHHH\\  HHHHHHHH  //HHHHHH\\  //HHHHHH\\ HHHH  //HHHHHH\\
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      HH      HH  HHHHHHH   HH      HH  HH         HHHH  HH      HH
      HH      HH  HH    HH  HH      HH  HH         HHHH  HH      HH
      \\HHHHH//   HH    HH  \\HHHHH//   \\HHHHHH// HHHH  \\HHHHH//
      */
//uso de condicionales (if..else) y de operadores condicionales

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    string gender;
    int age;

    cout << "Ingresa tu sexo [masculino/femenino]: ";
    cin >> gender;

    cout << "Ingresa tu edad: ";
    cin >> age;

    if (gender != "masculino" && gender != "femenino") {
        cout << "Ingresa in sexo válido" << endl;
        return 0;
    }

    if (age < 18) {
        if (gender == "femenino") {
            cout << "Eres una niña" << endl;
        } else {
            cout << "Eres un niño" << endl;
        }
    } else if (age >= 18 && age < 60) {
        if (gender == "masculino") {
            cout << "Eres un hombre hecho y derecho" << endl;
        } else {
            cout << "Eres una mujer hecha y derecha" << endl;
        }
    } else {
        if (gender == "femenino") {
            cout << "Eres una abuelita" << endl;
        } else {
            cout << "Eres un abuelito" << endl;
        }
    }

    return 0;
}
