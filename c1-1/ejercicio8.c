/*
Enunciado: Crear una función que reciba tres variables booleanas (A, B, C) 
y retorne el resultado de la siguiente expresión lógica: F = (A*B)+C~
El resultado debe mostrarse como una pequeña tabla de verdad en la consola 
para todas las combinaciones posibles de las entradas.
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>


int funcion_logica(int A, int B, int C) {
    return (A & B) | (!C);
}

int main() {

    printf("A B C | F\n");
    printf("------------\n");

    for (int A = 0; A <= 1; A++) {
    for (int B = 0; B <= 1; B++) {
    for (int C = 0; C <= 1; C++) {
            int F = funcion_logica(A, B, C);
            printf("%d %d %d | %d\n", A, B, C, F);
    }
    }
    }

return 0;
}