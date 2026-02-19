/*
Enunciado: Crear un programa pida al usuario un número entero positivo 
y almacenarlo en la variable NUMERO. Usando NUMERO como límite, 
aplicar la Criba de Eratóstenes e imprimir en pantalla todos 
los números menores a NUMERO que son primos.
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>

int main() {
    int V;
// V es el numero que ingresa el usuario 
// D numero que se compara con V, para determinar si sigue aumentando o no el numero 
// J numero que comprueba si es un numero primo o no
    printf("Por favor, ingresa un numero entero positivo: ");
    scanf("%d", &V);

     while (V <= 1) {
        printf("Numero no valido. Intenta de nuevo: ");
        scanf("%d", &V);
    }

    printf("Numeros primos hasta %d:\n", V);

    for (int D = 2; D <= V; D++) {
        int divisor = 1;
// asumimos que el valor es un primo para realizar la siguiente iteracion y comprobar si es o no 

        for (int j = 2; j < D; j++) {
            if (D % j == 0) {
                divisor = 0;
                break;
            }
        }

        if (divisor) {
            printf("%d ", D);
        }
    }

    return 0;
}