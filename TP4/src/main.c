#include <stdio.h>
#include "operator.h"
#include "fichier.h"

void exercice_4_1() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int resultat;

    switch (op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': resultat = quotient(num1, num2); break;
        case '%': resultat = modulo(num1, num2); break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1, num2); break;
        default:
            printf("Erreur : operateur inconnu.\n");
            return;
    }

    printf("Resultat : %d\n", resultat);
}

void exercice_4_2() {
    int choix;
    char nom_fichier[256];
    char message[1024];

    printf("\nQue souhaitez-vous faire ?\n");
    printf("1. Lire un fichier\n");
    printf("2. Ecrire dans un fichier\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Nom du fichier a lire : ");
        scanf("%s", nom_fichier);
        lire_fichier(nom_fichier);

    } else if (choix == 2) {
        printf("Nom du fichier : ");
        scanf("%s", nom_fichier);

        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        printf("Message a ecrire : ");
        fgets(message, sizeof(message), stdin);

        ecrire_dans_fichier(nom_fichier, message);

    } else {
        printf("Choix invalide.\n");
    }
}

int main() {
    int choix;

    printf("=== MENU PRINCIPAL ===\n");
    printf("1. Exercice 4.1 - Operateurs\n");
    printf("2. Exercice 4.2 - Fichiers\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            exercice_4_1();
            break;
        case 2:
            exercice_4_2();
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}
