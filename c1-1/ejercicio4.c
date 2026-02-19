/*
Enunciado: Se puede calcular el cuadrado de un número NUMERO 
al sumar los primeros NUMERO números impares. 
Con esta lógica, el cuadrado del número 7 es la sumatoria de 
los primeros 7 números impares, es decir 1+3+5+7+9+11+13=49. 
Crear un programa que pida al usuario un número y se almacene en 
la variable NUMERO y luego imprima la suma de todos los números impares y su resultado.
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>

int main() {
    int NUMERO;
    int suma = 0;
    int impar = 1;

    printf("Por favor, ingresa un numero entero positivo: ");
    scanf("%d", &NUMERO);

    while (NUMERO <= 0) {
        printf("Numero no valido. Intenta de nuevo: ");
        scanf("%d", &NUMERO);
    }

    printf("Los primeros %d numeros impares son:\n", NUMERO);

    for(int i = 1; i <= NUMERO; i++) {
        printf("%d", impar);
        suma += impar;

        if(i < NUMERO) {
            printf(" + ");
        }

        impar += 2;
    }

    printf(" = %d\n", suma);

    return 0;
}