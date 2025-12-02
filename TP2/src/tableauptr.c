#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tabInt[11];
    float tabFloat[11];

    srand(time(NULL));

    for (int i = 0; i < 11; i++) {
        tabInt[i] = rand() % 200;
        tabFloat[i] = (rand() % 1000) / 100.0;
    }

    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n\n");

    printf("Tableau de floats (avant) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n\n");

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3;
        }
    }

    printf("Tableau d'entiers (après) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n\n");

    printf("Tableau de floats (après) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n");

    return 0;
}
