#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Alice");
    strcpy(etudiants[2].adresse, "12 Rue de Paris");
    etudiants[2].note1 = 11.5;
    etudiants[2].note2 = 13.0;

    strcpy(etudiants[3].nom, "Leroy");
    strcpy(etudiants[3].prenom, "Paul");
    strcpy(etudiants[3].adresse, "47 Rue Nationale");
    etudiants[3].note1 = 9.0;
    etudiants[3].note2 = 10.0;

    strcpy(etudiants[4].nom, "Bernard");
    strcpy(etudiants[4].prenom, "Sophie");
    strcpy(etudiants[4].adresse, "29 Chemin des Roses");
    etudiants[4].note1 = 18.0;
    etudiants[4].note2 = 17.5;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d:\n", i + 1);
        printf("Nom: %s\n", etudiants[i].nom);
        printf("Prenom: %s\n", etudiants[i].prenom);
        printf("Adresse: %s\n", etudiants[i].adresse);
        printf("Note 1: %.2f\n", etudiants[i].note1);
        printf("Note 2: %.2f\n\n", etudiants[i].note2);
    }

    return 0;
}
