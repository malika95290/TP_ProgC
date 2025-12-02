#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int i;
    int x;
    int trouve = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        tab[i] = rand() % 201 - 100;
    }

    printf("Tableau :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    for (i = 0; i < 100; i++) {
        if (tab[i] == x) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("entier present\n");
    } else {
        printf("entier absent\n");
    }

    return 0;
}
