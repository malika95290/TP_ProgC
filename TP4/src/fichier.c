#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (!f) {
        fprintf(stderr, "Erreur: impossible d'ouvrir le fichier '%s' en lecture.\n", nom_de_fichier);
        return;
    }

    printf("Contenu du fichier %s :\n", nom_de_fichier);

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        fputs(buffer, stdout);
    }

    fclose(f);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "a"); /* mode append */
    if (!f) {
        fprintf(stderr, "Erreur: impossible d'ouvrir le fichier '%s' en ecriture.\n", nom_de_fichier);
        return;
    }

    fprintf(f, "%s\n", message);
    fclose(f);

    printf("Le message a ete ecrit dans le fichier %s.\n", nom_de_fichier);
}


