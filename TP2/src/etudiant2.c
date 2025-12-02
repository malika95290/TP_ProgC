#include <stdio.h>

int main() {
    char noms[5][30] = {"Dupont", "Martin", "Durand", "Leroy", "Bernard"};
    char prenoms[5][30] = {"Alice", "Jean", "Marie", "Paul", "Sophie"};
    char adresses[5][50] = {
        "12 rue de Paris",
        "8 avenue Victor Hugo",
        "5 boulevard du Centre",
        "47 rue Nationale",
        "29 chemin des Roses"
    };

    float note_prog[5] = {14.5, 11.0, 16.5, 9.0, 18.0};
    float note_sys[5]  = {12.0, 13.5, 15.0, 10.0, 17.5};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf("Nom: %s\n", noms[i]);
        printf("Prenom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note Programmation C: %.2f\n", note_prog[i]);
        printf("Note Systeme d'exploitation: %.2f\n\n", note_sys[i]);
    }

    return 0;
}
