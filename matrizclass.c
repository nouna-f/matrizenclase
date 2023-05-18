#include <stdio.h>

int main() {
    int f, c;
    
    printf("Por favor ingrese el número de filas: ");
    scanf("%d", &f);
    
    printf("Por favor ingrese el número de columnas: ");
    scanf("%d", &c);
    
    int matriz[f][c];
    
    // Esta linea de codigo es para inicializar la matriz en 0
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            matriz[i][j] = 0; // Ests linea establece todos los elementos de la matriz con el valor cero.
        }
    }
    
    int min_dimension = (f < c) ? f : c; // Esta línea de código calcula la dimensión más pequeña entre filas y columnas
    for (int i = 0; i < min_dimension; i++) {
        matriz[i][i] = 1; // Se establece el valor uno en los elementos de la diagonal principal mediante esta línea de código
    }
    
    printf("Resultado de la matriz:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]); //  Imprime cada elemento de la matriz con un espacio entre ellos
        }
        printf("\n"); // Imprime una nuevas líneas
    }
    
    return 0;
}
