#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Utilisation: %s <operateur> <num1> <num2>\n", argv[0]);
        fprintf(stderr, "Operateurs possibles : + - * / %% & | ~\n");
        return EXIT_FAILURE;
    }

    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
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
            return EXIT_FAILURE;
    }

    printf("Resultat : %d\n", resultat);
    return EXIT_SUCCESS;
}
