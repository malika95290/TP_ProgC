#include <stdio.h>

int main() {
    int a = 2;      // Valeur de base
    int b = 3;      // Exposant
    int resultat = 1;

    // Calcul de a^b
    for (int i = 0; i < b; i++) {
        resultat = resultat * a;
    }

    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
