#include <stdio.h>
#include <string.h>
#include "fichier.h"

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[200];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etudiants[5];
    char ligne[512];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Entrez les details de l'etudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf("%49s", etudiants[i].nom);

        printf("Prenom : ");
        scanf("%49s", etudiants[i].prenom);

        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        printf("Adresse : ");
        if (fgets(etudiants[i].adresse, sizeof(etudiants[i].adresse), stdin) == NULL) {
            printf("Erreur de lecture de l'adresse.\n");
            return 1;
        }
        for (int j = 0; etudiants[i].adresse[j] != '\0'; j++) {
            if (etudiants[i].adresse[j] == '\n') {
                etudiants[i].adresse[j] = '\0';
                break;
            }
        }

        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);

        snprintf(ligne, sizeof(ligne),
                 "Nom: %s; Prenom: %s; Adresse: %s; Note1: %.2f; Note2: %.2f\n",
                 etudiants[i].nom,
                 etudiants[i].prenom,
                 etudiants[i].adresse,
                 etudiants[i].note1,
                 etudiants[i].note2);

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("Les details des etudiants ont ete enregistres
