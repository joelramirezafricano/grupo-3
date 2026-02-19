/*
Enunciado: Una variable llamada NUMERO contiene un entero de 4 dígitos 
(mayor o igual a 1000 y menor o igual 9999). 
En caso que la variable NUMERO esté fuera del rango (menor a 1000 o mayor a 9999) 
entonces no se debe ejecutar el programa. Mostrar en pantalla cual es la unidad de mil, 
la centena, la decena y la unidad. No usar arreglos, vectores, listas o cualquier otro dato 
de ese tipo, la variable NUMERO debe ser de tipo entero. 
Resultado esperado en pantalla: {'Número' : NUMERO, 'Unidad' : UNIDAD, 'Decena' : 
DECENA, 'Centena' : CENTENA, 'Unidad de mil' : UNIDAD_DE_MIL}
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>
int main() {
int V= 1590;
            
            int miles = (V / 1000);
            int centenas = (V / 100) % 10;
            int decenas = (V / 10) % 10;
            int unidades = (V % 10);
            
            printf("Miles: %d\n", miles);
            printf("Centenas: %d\n", centenas);
            printf("Decenas: %d\n", decenas);
            printf("Unidades: %d\n", unidades);
            
        
    

    return 0;
}