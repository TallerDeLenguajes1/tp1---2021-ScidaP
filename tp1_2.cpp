#include <stdio.h>

int cuadrado(int a) {
    printf("Valor del numero: %d\n", a);
    printf("Direccion de memoria de la variable: %p\n", &a);
    a *= a;
    return a;
}

void cuadradoVoid(int *a) {
    printf("Valor del numero: %d\n", a);
    printf("Direccion de memoria de la variable: %p\n", &a);
    (*a) *= (*a);
}

void invertir(int *a, int *b) {
    printf("Valor viejo de la primera variable : %d\n", *a);
    printf("Valor viejo de segunda variable : %d\n", *b);
    int aux1 = *a;
    int aux2 = *b;
    *a = aux2;
    *b = aux1;
    printf("Valor nuevo de la primera variable : %d\n", *a);
    printf("Valor nuevo de segunda variable : %d\n", *b);
}

void orden(int *a, int *b) {
    if (*a > *b) {
        int aux1 = *a;
        int aux2 = *b;
        *a = aux2;
        *b = aux1;
        printf("Valor mas chico en a: %d\n", *a);
        printf("Valor mas grande en b: %d\n", *b);
    } else {
        printf("Valor mas chico en a: %d\n", *a);
        printf("Valor mas grande en b: %d\n", *b);
    }
}

int main() {
    int numero;
    puts("Elija un numero");
    scanf("%d", &numero);
    int *pNumero = &numero;
    // Calcular el cuadrado en una función INT
    int cuadradoNumero = cuadrado(numero);
    printf("Cuadrado del numero elejido en una funcion int: %d\n", cuadradoNumero);
    // Calcular el cuadrado en una función VOID
    cuadradoVoid(pNumero);
    printf("Cuadrado del numero elejido en una funcion void: %d\n", *pNumero);
    // Invertir los valores de dos variables
    puts("Elija otro numero");
    int numero2;
    fflush(stdin);
    scanf("%d", &numero2);
    fflush(stdin);
    int *pNumero2 = &numero2;
    invertir(pNumero, pNumero2);
    // Cambiar orden de mayor a menor
    orden(pNumero, pNumero2);
    getchar();
    return 0;
}