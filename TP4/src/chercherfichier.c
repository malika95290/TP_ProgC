#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compter_occurrences(const char *ligne, const char *motif) {
    int count = 0;
    size_t len_motif = strlen(motif);

    if (len_motif == 0) {
        return 0;
    }

    const char *p = ligne;
    while ((p = strstr(p, motif)) != NULL) {
        ++count;
        p += len_motif;
    }

    return count;
}

int main(int argc, char *argv[]) {
    char nom_fichier[256];

    if (argc >= 2) {
        strncpy(nom_fichier, argv[1], sizeof(nom_fichier) - 1);
        nom_fichier[sizeof(nom_fichier) - 1] = '\0';
    } else {
        printf("Entrez le nom du fichier dans lequel effectuer la recherche : ");
        if (scanf("%255s", nom_fichier) != 1) {
            fprintf(stderr, "Entree invalide pour le nom de fichier.\n");
            return EXIT_FAILURE;
        }
    }

    FILE *f = fopen(nom_fichier, "r");
    if (!f) {
        fprintf(stderr, "Erreur: impossible d'ouvrir le fichier '%s'.\n", nom_fichier);
        return EXIT_FAILURE;
    }

    char motif[256];
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    /* vider le tampon d'entree avant d'utiliser fgets */
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        /* vider */
    }
    if (!fgets(motif, sizeof(motif), stdin)) {
        fprintf(stderr, "Erreur de lecture de la phrase.\n");
        fclose(f);
        return EXIT_FAILURE;
    }

    /* enlever le '\n' final de motif s'il existe */
    size_t len = strlen(motif);
    if (len > 0 && motif[len - 1] == '\n') {
        motif[len - 1] = '\0';
    }

    printf("\nResultats de la recherche :\n");

    char ligne[1024];
    int numero_ligne = 0;
    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        ++numero_ligne;
        int occ = compter_occurrences(ligne, motif);
        if (occ > 0) {
            printf("Ligne %d, %d fois\n", numero_ligne, occ);
        }
    }

    fclose(f);
    return EXIT_SUCCESS;
}
