#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

#define NB_ETUDIANTS 5
#define TAILLE_NOM 64
#define TAILLE_PRENOM 64
#define TAILLE_ADRESSE 256

struct etudiant {
    char nom[TAILLE_NOM];
    char prenom[TAILLE_PRENOM];
    char adresse[TAILLE_ADRESSE];
    int note1;
    int note2;
};

int main(void) {
    struct etudiant etudiants[NB_ETUDIANTS];
    char ligne[512];
    const char *nom_fichier = "etudiant.txt";

    printf("=== Exercice 4.3 - Gestion d'une base de donnees etudiante ===\n");

    for (int i = 0; i < NB_ETUDIANTS; ++i) {
        printf("\nEntrez les details de l'etudiant.e %d :\n", i + 1);

        printf("Nom : ");
        if (scanf("%63s", etudiants[i].nom) != 1) {
            fprintf(stderr, "Erreur de lecture du nom.\n");
            return EXIT_FAILURE;
        }

        printf("Prenom : ");
        if (scanf("%63s", etudiants[i].prenom) != 1) {
            fprintf(stderr, "Erreur de lecture du prenom.\n");
            return EXIT_FAILURE;
        }

        printf("Adresse : ");
        /* lire l'espace avant l'adresse puis la ligne complete jusqu'au '\n' */
        if (scanf(" %255[^\n]", etudiants[i].adresse) != 1) {
            fprintf(stderr, "Erreur de lecture de l'adresse.\n");
            return EXIT_FAILURE;
        }

        printf("Note 1 : ");
        if (scanf("%d", &etudiants[i].note1) != 1) {
            fprintf(stderr, "Erreur de lecture de la note 1.\n");
            return EXIT_FAILURE;
        }

        printf("Note 2 : ");
        if (scanf("%d", &etudiants[i].note2) != 1) {
            fprintf(stderr, "Erreur de lecture de la note 2.\n");
            return EXIT_FAILURE;
        }

        /* formater la ligne a ecrire dans le fichier */
        snprintf(ligne, sizeof(ligne), "%s;%s;%s;%d;%d",
                 etudiants[i].nom,
                 etudiants[i].prenom,
                 etudiants[i].adresse,
                 etudiants[i].note1,
                 etudiants[i].note2);

        ecrire_dans_fichier(nom_fichier, ligne);
    }

    printf("\nLes details des etudiants ont ete enregistres dans le fichier %s.\n", nom_fichier);

    return EXIT_SUCCESS;
}


