//  importa la libreria estandar de entra y salida
#include <stdio.h>

void main() {

    int x = 42;  // se define una variable entera
    int *mi_puntero = &x; // se define un apuntador o puntero

    printf("Valor de x: %d\n", x); // se muestr el valor de la variable
    printf("Valor del  puntero (dirección): %p\n", mi_puntero); // se muestra la direccion en memoria
    printf("Valor apuntado por mi_puntero: %d\n", *mi_puntero); // el valor que contiene esa direccion
}
