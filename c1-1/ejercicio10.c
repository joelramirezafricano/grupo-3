/*
Enunciado: Los sensores analógicos suelen presentar ruido. 
Definir una lista de 10 lecturas llamada LECTURAS_ADC. 
Crear un programa que calcule una nueva lista donde cada elemento 
sea el promedio de la lectura actual y las dos anteriores 
(esto se le conoce como filtro de media móvil). Para la primera posición, 
segunda y última posición de la nueva lista, dejar en 0.
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>


int main() {
    int LECTURAS_ADC[10] = {100, 105, 98, 110, 115, 120, 125, 130, 128, 135};
    float filtro[10] = {0};  
    
    for(int P = 2; P <= 8; P++) {
        filtro[P] = (LECTURAS_ADC[P] +
                     LECTURAS_ADC[P - 1] +
                     LECTURAS_ADC[P - 2]) / 3.0;
    }

    // Mostrar resultados
    printf("Lecturas originales:\n");
    for(int P = 0; P < 10; P++) {
        printf("%d ", LECTURAS_ADC[P]);
    }

    printf("\n\nLecturas filtradas:\n");
    for(int P = 0; P < 10; P++) {
        printf("%.2f ", filtro[P]);
    }

    return 0;
}