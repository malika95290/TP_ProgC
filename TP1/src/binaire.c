#include <stdio.h>

void print_binary_divmod(unsigned int n) {
    // Méthode demandée : division par 2 et reste (%)
    // On stocke les bits à l'envers puis on les affiche dans le bon ordre avec une boucle for.
    if (n == 0) {
        printf("0");
        return;
    }

    char bits[sizeof(unsigned int) * 8]; // assez grand pour tous les bits d'un int
    int len = 0;

    while (n > 0) {
        bits[len++] = (n % 2) ? '1' : '0';
        n /= 2;
    }

    // Affichage dans l'ordre correct (du MSB vers le LSB)
    for (int i = len - 1; i >= 0; --i) {
        putchar(bits[i]);
    }
}

/* Variante en bonus (manipulation de bits) : non utilisée dans main()
   Montre comment parcourir les bits du plus significatif au moins significatif.
   Utile pour comprendre & et >>.
*/
void print_binary_bitwise(unsigned int n) {
    int started = 0;
    for (int i = (int)(sizeof(unsigned int) * 8) - 1; i >= 0; --i) {
        unsigned int bit = (n >> i) & 1u;
        if (bit) started = 1;
        if (started) putchar(bit ? '1' : '0');
    }
    if (!started) putchar('0');
}

int main(void) {
    unsigned int tests[] = {0u, 4096u, 65536u, 65535u, 1024u};
    int nb = sizeof(tests) / sizeof(tests[0]);

    printf("Affichage binaire (division par 2 et modulo) :\n\n");

    for (int k = 0; k < nb; ++k) {
        printf("%10u = ", tests[k]);
        print_binary_divmod(tests[k]);
        putchar('\n');
    }

    return 0;
}
