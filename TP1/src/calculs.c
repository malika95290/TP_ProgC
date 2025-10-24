#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '+';

    int resultat = 0;

    printf("num1 = %d, num2 = %d, opérateur = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat : %d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat : %d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat : %d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat : %d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat : %d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro pour le modulo !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat : %d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat : %d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            printf("Résultat : ~%d = %d\n", num1, ~num1);
            // Remarque : l’opérateur ~ ne s’applique qu’à un seul nombre
            break;

        default:
            printf("Erreur : opérateur inconnu '%c'\n", op);
            break;
    }

    return 0;
}


