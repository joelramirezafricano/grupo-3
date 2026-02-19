/*
Enunciado: Simular un detector de secuencia para una cerradura electrónica 
(simulación de una máquina de estados). 
El programa debe recibir una lista de bits uno por uno que ingresa el usuario. 
Si detecta que los últimos bits ingresados tienen la secuencia específica 1011,
el mensaje debe ser "Cerradura abierta". Si el bit ingresado rompe la secuencia,
no debe mostrar nada.
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>

int main() {

    
    int bits[] = {1, 0, 1, 1, 0, 1, 0};
    int tamaño = sizeof(bits) / sizeof(bits[0]);

    int estado = 0;

    for (int i = 0; i < tamaño; i++) {

        int bit = bits[i];

        switch (estado) {

            case 0:
                if (bit == 1)
                    estado = 1;
                break;

            case 1:
                if (bit == 0)
                    estado = 2;
                else
                    estado = 1;
                break;

            case 2:
                if (bit == 1)
                    estado = 3;
                else
                    estado = 0;
                break;

            case 3:
                if (bit == 1) {
                    printf("Cerradura abierta\n");
                estado = 1;
                }else{
                estado = 2;
                }
                break;
        }
    }

    return 0;
}