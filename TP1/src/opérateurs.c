#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("===== Opérateurs arithmétiques =====\n");
    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition (a + b) = %d\n", a + b);
    printf("Soustraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division (a / b) = %d\n", a / b);
    printf("Modulo (a %% b) = %d\n", a % b);

    // Opérateurs logiques et de comparaison
    printf("\n===== Opérateurs logiques et de comparaison =====\n");

    printf("a == b : %d\n", a == b);   // égalité
    printf("a != b : %d\n", a != b);   // différence
    printf("a > b  : %d\n", a > b);    // supérieur
    printf("a < b  : %d\n", a < b);    // inférieur
    printf("a >= b : %d\n", a >= b);   // supérieur ou égal
    printf("a <= b : %d\n", a <= b);   // inférieur ou égal

    // Opérateurs logiques purs (ET, OU, NON)
    printf("\n===== Opérateurs logiques =====\n");
    printf("(a > 10) && (b < 5) : %d\n", (a > 10) && (b < 5));  // ET logique
    printf("(a > 10) || (b > 5) : %d\n", (a > 10) || (b > 5));  // OU logique
    printf("!(a == b) : %d\n", !(a == b));                      // NON logique

    return 0;
}
