#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int i;
    int min, max;

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    min = tab[0];
    max = tab[0];

    for (i = 1; i < 100; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    printf("Le numero le plus petit est : %d\n", min);
    printf("Le numero le plus grand est : %d\n", max);

    return 0;
}
