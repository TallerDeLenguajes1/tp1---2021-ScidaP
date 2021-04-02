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

int main() {
    int numero = 8;
    int *pNumero = &numero;
    // Calcular el cuadrado en una función INT
    int cuadradoNumero = cuadrado(numero);
    printf("Cuadrado de 8 en una funcion int: %d\n", numero);
    // Calcular el cuadrado en una función VOID
    cuadradoVoid(pNumero);
    printf("Cuadrado de 8 en una funcion void: %d\n", *pNumero);
    // Invertir los valores de dos variables
    int valor1 = 2;
    int *pValor1 = &valor1;
    int valor2 = 9;
    int *pValor2 = &valor2;
    invertir(pValor1, pValor2);
    getchar();
    return 0;
}