#include <stdio.h>

int main() {
    int compteur = 5; // tu peux modifier cette valeur (doit être < 10)

    if (compteur >= 10) {
        printf("La valeur de compteur doit être strictement inférieure à 10.\n");
        return 1;
    }

    // Boucles imbriquées pour former un triangle
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // On alterne les caractères avec une condition
            if (i % 2 == 0 && j > 1 && j < i)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
