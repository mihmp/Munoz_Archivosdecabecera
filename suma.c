#include <stdio.h>

// Función para realizar la suma de dos números
int sumar(int a, int b) {
    return a + b;
}

int main() {
    // Ejemplo de uso de la función sumar
    int num1 = 5;
    int num2 = 7;
    int resultado = sumar(num1, num2);

    // Mostrar el resultado
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);

    return 0;
}
