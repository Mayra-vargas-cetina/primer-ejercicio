#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;  //funciones de std//


int main () { //rutina principal del programa//

cout << "Ingrese una numero entero: "; // cout es la salida de datos en pantalla//
int num; // se hace la definicion de la variable//
cin >> num; //entrada de datos, en este caso de la variable num//
printf ("%d =", num);
for (int i= 2; num > 1; i++){ // se hace un bucle for de 1 a 2, mientras que i sea mayor que 1 //
    while (num % i==0) { // mientras que el numero sea divisible en el iterador que estoy recorriendo entonces se va a imprimir el iterador//
        printf("%d * ", i);
        num /= i; //se divide el numero ingresado entre si mismo con el valor del iterador//
    }
}

printf ("\n\n\n");system("PAUSA");
return 0;
}