#include <stdio.h>

void afficher_octets(void *ptr, size_t taille) {
    unsigned char *p = (unsigned char *)ptr;
    size_t i;

    for (i = 0; i < taille; i++) {
        printf("%02x ", p[i]);
    }
    printf("\n");
}

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 2.5f;
    double d = 1.0;
    long double ld = 1.0L;

    printf("Octets de short :\n");
    afficher_octets(&s, sizeof(short));

    printf("Octets de int :\n");
    afficher_octets(&i, sizeof(int));

    printf("Octets de long int :\n");
    afficher_octets(&li, sizeof(long int));

    printf("Octets de float :\n");
    afficher_octets(&f, sizeof(float));

    printf("Octets de double :\n");
    afficher_octets(&d, sizeof(double));

    printf("Octets de long double :\n");
    afficher_octets(&ld, sizeof(long double));

    return 0;
}
