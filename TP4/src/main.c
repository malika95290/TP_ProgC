#include <stdio.h>
#include <stdlib.h>

#include "operator.h"
#include "fichier.h"
#include "liste.h"

void exercice_4_1(void);
void exercice_4_2(void);
void exercice_4_7(void);

int main(void) {
    int choix;

    printf("Choisissez l'exercice a executer :\n");
    printf("1. Exercice 4.1 - Calcul avec operateurs\n");
    printf("2. Exercice 4.2 - Gestion de fichiers\n");
    printf("3. Exercice 4.7 - Gestion d'une liste de couleurs\n");
    printf("Votre choix : ");
    if (scanf("%d", &choix) != 1) {
        fprintf(stderr, "Entree invalide.\n");
        return EXIT_FAILURE;
    }

    switch (choix) {
        case 1:
            exercice_4_1();
            break;
        case 2:
            exercice_4_2();
            break;
        case 3:
            exercice_4_7();
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return EXIT_SUCCESS;
}

void exercice_4_1(void) {
    int num1, num2;
    char op;

    printf("=== Exercice 4.1 - Calcul avec operateurs ===\n");
    printf("Entrez num1 : ");
    if (scanf("%d", &num1) != 1) {
        fprintf(stderr, "Entree invalide pour num1.\n");
        return;
    }
    printf("Entrez num2 : ");
    if (scanf("%d", &num2) != 1) {
        fprintf(stderr, "Entree invalide pour num2.\n");
        return;
    }
    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    if (scanf(" %c", &op) != 1) {
        fprintf(stderr, "Entree invalide pour l'operateur.\n");
        return;
    }

    int resultat;
    switch (op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et(num1, num2);
            break;
        case '|':
            resultat = ou(num1, num2);
            break;
        case '~':
            resultat = negation(num1, num2);
            break;
        default:
            fprintf(stderr, "Operateur inconnu.\n");
            return;
    }

    printf("Resultat : %d\n", resultat);
}

void exercice_4_2(void) {
    int choix;
    char nom_de_fichier[256];
    char message[512];

    printf("=== Exercice 4.2 - Gestion de fichiers ===\n");

    do {
        printf("\nQue souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Ecrire dans un fichier\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        if (scanf("%d", &choix) != 1) {
            fprintf(stderr, "Entree invalide.\n");
            return;
        }

        switch (choix) {
            case 1:
                printf("\nEntrez le nom du fichier a lire : ");
                if (scanf("%255s", nom_de_fichier) != 1) {
                    fprintf(stderr, "Entree invalide pour le nom de fichier.\n");
                    return;
                }
                lire_fichier(nom_de_fichier);
                break;
            case 2:
                printf("\nEntrez le nom du fichier dans lequel vous souhaitez ecrire : ");
                if (scanf("%255s", nom_de_fichier) != 1) {
                    fprintf(stderr, "Entree invalide pour le nom de fichier.\n");
                    return;
                }
                printf("Entrez le message a ecrire : ");
                /* lit toute la ligne, y compris les espaces, jusqu'au retour chariot */
                if (scanf(" %511[^\n]", message) != 1) {
                    fprintf(stderr, "Entree invalide pour le message.\n");
                    return;
                }
                ecrire_dans_fichier(nom_de_fichier, message);
                break;
            case 0:
                printf("Fin de l'exercice 4.2.\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }

    } while (choix != 0);
}

void exercice_4_7(void) {
    printf("=== Exercice 4.7 - Gestion d'une liste de couleurs ===\n");

    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleurs[10] = {
        {0xFF, 0x00, 0x00, 0xFF}, /* rouge */
        {0x00, 0xFF, 0x00, 0xFF}, /* vert */
        {0x00, 0x00, 0xFF, 0xFF}, /* bleu */
        {0xFF, 0xFF, 0x00, 0xFF}, /* jaune */
        {0xFF, 0x00, 0xFF, 0xFF}, /* magenta */
        {0x00, 0xFF, 0xFF, 0xFF}, /* cyan */
        {0x80, 0x80, 0x80, 0xFF}, /* gris */
        {0x00, 0x00, 0x00, 0xFF}, /* noir */
        {0xFF, 0xFF, 0xFF, 0xFF}, /* blanc */
        {0x80, 0x00, 0x80, 0xFF}  /* violet */
    };

    for (int i = 0; i < 10; ++i) {
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);

    liberer_liste(&ma_liste);
}

