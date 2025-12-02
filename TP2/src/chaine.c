#include <stdio.h>

int main() {
    char chaine1[50] = "Hello";
    char chaine2[50] = " World!";
    char copie[50];
    char concat[100];
    int i = 0, j = 0, longueur = 0;

    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Longueur de chaine1 : %d\n", longueur);
    printf("Copie de chaine1 : %s\n", copie);
    printf("Concaténation : %s\n", concat);

    return 0;
}
