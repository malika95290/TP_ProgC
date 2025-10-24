#include <stdio.h>

int main(void) {
    int n = 5;          // hauteur de la pyramide (modifiable)
    int i, j;

    if (n <= 0) {
        printf("La hauteur n doit être > 0.\n");
        return 1;
    }

    printf("Pyramide de hauteur %d :\n\n", n);

    // Pour chaque niveau de 1 à n
    for (i = 1; i <= n; i++) {

        // 1) Espaces pour centrer
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Nombres croissants : 1 .. i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Nombres décroissants : i-1 .. 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Fin de ligne
        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");
    return 0;
}

