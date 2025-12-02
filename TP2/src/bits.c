#include <stdio.h>

int main() {
    int d = 0x10001000;
    int bit4, bit20, resultat;

    bit4 = (d >> 28) & 1;
    bit20 = (d >> 12) & 1;

    if (bit4 == 1 && bit20 == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }

    printf("%d\n", resultat);

    return 0;
}
