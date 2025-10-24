#include <stdio.h>

int main() {
    // Déclaration et affectation des variables
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;

    short s = -32000;
    signed short ss = -12345;
    unsigned short us = 65000;

    int i = -100000;
    signed int si = -200000;
    unsigned int ui = 4000000000U;

    long int li = -1000000000L;
    signed long int sli = -2000000000L;
    unsigned long int uli = 4000000000UL;

    long long int lli = -9000000000000000000LL;
    signed long long int slli = -8000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Affichage des valeurs
    printf("===== Variables de différents types =====\n\n");

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("\nshort : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n", us);

    printf("\nint : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);

    printf("\nlong int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n", uli);

    printf("\nlong long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("\nfloat : %.2f\n", f);
    printf("double : %.9f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}
