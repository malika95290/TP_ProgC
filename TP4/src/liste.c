#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct liste_couleurs *liste) {
    if (liste) {
        liste->tete = NULL;
    }
}

void insertion(const struct couleur *c, struct liste_couleurs *liste) {
    if (!liste || !c) {
        return;
    }

    struct noeud_couleur *nouveau = malloc(sizeof(struct noeud_couleur));
    if (!nouveau) {
        fprintf(stderr, "Erreur: allocation memoire echouee.\n");
        return;
    }

    nouveau->valeur = *c;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

void parcours(const struct liste_couleurs *liste) {
    const struct noeud_couleur *courant = liste ? liste->tete : NULL;
    int index = 0;
    while (courant) {
        printf("Couleur %d : R=%02X G=%02X B=%02X A=%02X\n",
               index,
               courant->valeur.r,
               courant->valeur.g,
               courant->valeur.b,
               courant->valeur.a);
        courant = courant->suivant;
        ++index;
    }
}

void liberer_liste(struct liste_couleurs *liste) {
    if (!liste) {
        return;
    }

    struct noeud_couleur *courant = liste->tete;
    while (courant) {
        struct noeud_couleur *suivant = courant->suivant;
        free(courant);
        courant = suivant;
    }
    liste->tete = NULL;
}
