#include <stdio.h>

int main() {
    int compteur = 5; // tu peux changer cette valeur (doit être < 10)

    if (compteur >= 10) {
        printf("La valeur de compteur doit être strictement inférieure à 10.\n");
        return 1;
    }

    printf("Triangle rectangle avec des boucles for (compteur = %d) :\n\n", compteur);

    // Boucles imbriquées
    for (int i = 1; i <= compteur; i++) {       // lignes
        for (int j = 1; j <= i; j++) {          // colonnes
            if (i == 1 || j == 1 || j == i || i == compteur)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }

    return 0;
}
