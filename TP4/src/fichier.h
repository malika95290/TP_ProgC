#ifndef FICHIER_H
#define FICHIER_H

void lire_fichier(const char *nom_fichier);
void ecrire_dans_fichier(const char *nom_fichier, const char *message) {
    FILE *f = fopen(nom_fichier, "a");  // <-- "a" pour ajouter à la fin

    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return;
    }

    fprintf(f, "%s", message);
    fclose(f);

    printf("Le message a ete ecrit dans le fichier %s.\n", nom_fichier);
}

#endif

