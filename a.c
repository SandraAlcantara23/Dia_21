#include <stdio.h>

int main() {
    int n, i = 1, suma = 0;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    
    while (i <= n) {
        suma += i;
        i++;
    }
    
    printf("La suma de los primeros %d números naturales es: %d\n", n, suma);
    
    return 0;
}
