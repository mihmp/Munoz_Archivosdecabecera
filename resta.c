#include <stdio.h>

// Función para realizar la suma de dos números
int sumar(int a, int b) {
    return a + b;
}

// Función para realizar la resta de dos números
int restar(int a, int b) {
    return a - b;
}

int main() {
    // Ejemplo de uso de las funciones sumar y restar
    int num1 = 5;
    int num2 = 7;

    // Realizar la suma
    int suma = sumar(num1, num2);
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    // Realizar la resta
    int resta = restar(num1, num2);
    printf("La resta de %d y %d es: %d\n", num1, num2, resta);

    return 0;
}
