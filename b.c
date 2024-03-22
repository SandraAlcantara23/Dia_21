#include <stdio.h>

typedef struct {
    int numerador;
    int denominador;
} Fraccion;

Fraccion sumarFracciones(Fraccion fraccion1, Fraccion fraccion2) {
    Fraccion resultado;
    resultado.numerador = (fraccion1.numerador * fraccion2.denominador) + (fraccion2.numerador * fraccion1.denominador);
    resultado.denominador = fraccion1.denominador * fraccion2.denominador;
    return resultado;
}

Fraccion restarFracciones(Fraccion fraccion1, Fraccion fraccion2) {
    Fraccion resultado;
    resultado.numerador = (fraccion1.numerador * fraccion2.denominador) - (fraccion2.numerador * fraccion1.denominador);
    resultado.denominador = fraccion1.denominador * fraccion2.denominador;
    return resultado;
}

Fraccion multiplicarFracciones(Fraccion fraccion1, Fraccion fraccion2) {
    Fraccion resultado;
    resultado.numerador = fraccion1.numerador * fraccion2.numerador;
    resultado.denominador = fraccion1.denominador * fraccion2.denominador;
    return resultado;
}

int main() {
    Fraccion fraccion1, fraccion2, resultado;

    // Fracción 1
    printf("Ingrese la primera fracción en el formato 'numerador/denominador': ");
    scanf("%d/%d", &fraccion1.numerador, &fraccion1.denominador);

    // Fracción 2
    printf("Ingrese la segunda fracción en el formato 'numerador/denominador': ");
    scanf("%d/%d", &fraccion2.numerador, &fraccion2.denominador);

    // Suma de fracciones
    resultado = sumarFracciones(fraccion1, fraccion2);
    printf("La suma de las fracciones es: %d/%d\n", resultado.numerador, resultado.denominador);

    // Resta de fracciones
    resultado = restarFracciones(fraccion1, fraccion2);
    printf("La resta de las fracciones es: %d/%d\n", resultado.numerador, resultado.denominador);

    // Multiplicación de fracciones
    resultado = multiplicarFracciones(fraccion1, fraccion2);
    printf("La multiplicación de las fracciones es: %d/%d\n", resultado.numerador, resultado.denominador);

    return 0;
}
