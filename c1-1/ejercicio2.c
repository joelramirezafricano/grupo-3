/*
Enunciado: De un número entero positivo que está guardado en una variable llamada NUMERO, 
mostrar en pantalla su raíz cuadrada usando el método de Newton. 
Para este ejercicio debe realizarse una función que acepte el valor la variable NUMERO 
y retorne el resultado usando el método de Newton, sin usar una librería que contenga esa función. 
Resultado esperado en pantalla: {'Número' : NUMERO, 'Raíz cuadrada usando Newton' : RESULTADO}
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>


double raiz_newton(int NUMERO) {
    double x = NUMERO;  
    double tolerancia = 0.001; 

    while (1) {
        double numero2 = 0.5 * (x + NUMERO / x);

        
        if ((numero2 - x < tolerancia) && (numero2 - x > -tolerancia)) {
            return numero2;
        }

        x = numero2;
    }
}

int main() {
    int NUMERO = 5;

    double RESULTADO = raiz_newton(NUMERO);

    printf("{'Número': %d, 'Raíz cuadrada usando Newton': %.3f}\n", NUMERO, RESULTADO);

    return 0;
}