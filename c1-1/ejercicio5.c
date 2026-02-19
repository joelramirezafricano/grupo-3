/*
Enunciado: Preguntar al usuario un número entero y almacenar en la variable NUMERO.
Imprimir el valor de la posición NUMERO de la secuencia de Fibonacci asumiendo que
f0 = 0 y f1 = 1.Verificar que NUMERO debe ser >= 2, en caso contrario, 
mostrar un mensaje que NUMERO debe cumplir esa condición.
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>

int main() {

    int NUMERO = 15;

    if (NUMERO < 2) {
        printf("NUMERO debe ser mayor o igual a 2.\n");
        return 0;
    }

    int f0 = 0;
    int f1 = 1;

    for (int i = 2; i <= NUMERO; i++) {
        int fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }

    printf("Fibonacci en la posicion %d: %d\n", NUMERO, f1);

    return 0;
}
      
       

