#include <stdio.h>

int main() {
    int numero = 1;
    int *pNumero = &numero;

    printf("Contenido del puntero: %d\n", *pNumero);

    printf("Direccion de memoria almacenada por el puntero: %p\n", pNumero);

    printf("Direccion de memoria de la variable: %p\n", &numero);

    printf("Direccion de memoria del puntero: %p\n", &pNumero);

    printf("Tamaño de la variable: %d", sizeof(numero));

    getchar();
    return 0;
}