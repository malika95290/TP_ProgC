#include <stdio.h>

int main() {
    int tab[100];
    int i;
    int x;
    int gauche, droite, milieu;
    int trouve = 0;

    for (i = 0; i < 100; i++) {
        tab[i] = i + 1;
    }

    printf("Tableau trie :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    gauche = 0;
    droite = 99;

    while (gauche <= droite) {
        milieu = (gauche + droite) / 2;

        if (tab[milieu] == x) {
            trouve = 1;
            break;
        } else if (tab[milieu] < x) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    if (trouve) {
        printf("entier present\n");
    } else {
        printf("entier absent\n");
    }

    return 0;
}
