#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

void lire_fichier(const char *nom_fichier) {
    FILE *f = fopen(nom_fichier, "r");

    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return;
    }

    char ligne[1024];
    printf("Contenu du fichier %s :\n", nom_fichier);

    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }

    fclose(f);
}

void ecrire_dans_fichier(const char *nom_fichier, const char *message) {
    FILE *f = fopen(nom_fichier, "w");

    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return;
    }

    fprintf(f, "%s", message);
    fclose(f);

    printf("Le message a ete ecrit dans le fichier %s.\n", nom_fichier);
}
