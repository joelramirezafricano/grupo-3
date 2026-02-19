/*
Enunciado: Leer un número entero en la variable VALOR. 
Utilizar operadores de bits (bitwise) para determinar 
si el número es par o impar (verificando el bit menos significativo) 
y mostrar el resultado. No está permitido usar el operador de módulo (%).
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>

int main() {

    int VALOR = 9;  

    if ((VALOR & 1) == 0) {
        printf("El numero es Par\n");
    } else {
        printf("El numero es Impar\n");
    }

    return 0;
}