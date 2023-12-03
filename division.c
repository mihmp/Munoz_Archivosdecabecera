#include <stdio.h>

// Función para realizar la suma de dos números
int sumar(int a, int b) {
    return a + b;
}

// Función para realizar la resta de dos números
int restar(int a, int b) {
    return a - b;
}

// Función para realizar la multiplicación de dos números
int multiplicar(int a, int b) {
    return a * b;
}

// Función para realizar la división de dos números
float dividir(int a, int b) {
    // Verificar si el divisor es cero para evitar una división por cero
    if (b == 0) {
        printf("Error: No se puede dividir por cero.\n");
        return 0.0;  // En caso de error, se retorna 0.0
    }

    return (float)a / b;  // Se realiza la división y se devuelve el resultado como un número de punto flotante
}

int main() {
    // Ejemplo de uso de las funciones sumar, restar, multiplicar y dividir
    int num1 = 10;
    int num2 = 5;

    // Realizar la suma
    int suma = sumar(num1, num2);
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    // Realizar la resta
    int resta = restar(num1, num2);
    printf("La resta de %d y %d es: %d\n", num1, num2, resta);

    // Realizar la multiplicación
    int multiplicacion = multiplicar(num1, num2);
    printf("La multiplicación de %d y %d es: %d\n", num1, num2, multiplicacion);

    // Realizar la división
    float division = dividir(num1, num2);
    printf("La división de %d entre %d es: %.2f\n", num1, num2, division);

    return 0;
}
