/*
Enunciado: En sistemas embebidos, los registros suelen empaquetar varios estados. 
Leer una variable de 8 bits llamada REGISTRO_ESTADO. 
El programa debe extraer y mostrar por separado el valor de los 4 bits menos significativos 
(nibble inferior) y el estado (0 o 1) del bit número 5. 
Usar exclusivamente operadores de bits (&, >>).
Nombres:
Joel Ramirez
Isai Romero
Eduardo Ruiz
Compilador: OneCompiler
*/
#include <stdio.h>

int main() {

    unsigned char REGISTRO_ESTADO = 182;

    unsigned char nibble_inferior = REGISTRO_ESTADO & 0x0F;
    unsigned char bit5 = (REGISTRO_ESTADO & 0x20) >> 5;

    printf("Nibble inferior: %u\n", nibble_inferior);
    printf("Bit 5: %u\n", bit5);

    return 0;
}