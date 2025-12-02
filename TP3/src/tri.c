#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int i, j, tmp;

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        tab[i] = rand() % 201 - 100;
    }

    printf("Tableau non trie :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    for (i = 0; i < 100 - 1; i++) {
        for (j = 0; j < 100 - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    printf("Tableau trie par ordre croissant :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
