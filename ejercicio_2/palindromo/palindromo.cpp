
#include <iostream>
#include <cstring>

using namespace std;

int main()              //Rutina principal
{   cout << "Ingrese una palabra: ";    //Imprimir en pantalla
    char word[80];                      //arreglo de caracteres 
    cin >> word;                        //guardar en variable
    char rev[80];                       //arreglo de caracteres 


    size_t n = strlen( word );          //se obtiene el tamaño de la variable
    

    size_t i = 0;                       //inicializa variable 
    for (i ; i < n; i++ ) {             //bucle for para recorrer letras
    rev[i] = word[n - i - 1];           //se guarda en arreglo la palabra 
    
    
    if (rev[i]==word[i]){               //lógica para comparar las palabras, si las palabras son iguales imprima que es un palindromo
    cout << "La palabra "<< word <<"  es un palindromo";  //imprime el resultado positivo  
    break; // pausa al for
    }
    else{ // de lo contrario la palabra no es un palidromo//
    cout << "La palabra "<< word <<" no es un palindromo"; //imprime resultado negativo  
    break; // pausa al for
    }
    
    }
    
    
}