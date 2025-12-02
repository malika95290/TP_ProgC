#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int couleurs_egales(struct Couleur c1, struct Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

int main() {
    struct Couleur tab[100];
    struct Couleur distinctes[100];
    int compteurs[100];
    int nb_distinctes = 0;
    int i, j;
    int trouve;

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = 0xff;
    }

    for (i = 0; i < 100; i++) {
        trouve = 0;
        for (j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tab[i], distinctes[j])) {
                compteurs[j]++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes] = tab[i];
            compteurs[nb_distinctes] = 1;
            nb_distinctes++;
        }
    }

    for (i = 0; i < nb_distinctes; i++) {
        printf("ff 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].r, distinctes[i].g, distinctes[i].b,
               compteurs[i]);
    }

    return 0;
}
