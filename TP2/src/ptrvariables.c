#include <stdio.h>

int main() {
    char c = 10;
    short s = 200;
    int i = 3000;
    long int li = 40000;
    long long int lli = 500000;
    float f = 1.5f;
    double d = 2.5;
    long double ld = 3.5;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n");
    printf("c  : adresse=%p, valeur=%d\n", (void*)pc, c);
    printf("s  : adresse=%p, valeur=%d\n", (void*)ps, s);
    printf("i  : adresse=%p, valeur=%d\n", (void*)pi, i);
    printf("li : adresse=%p, valeur=%ld\n", (void*)pli, li);
    printf("lli: adresse=%p, valeur=%lld\n", (void*)plli, lli);
    printf("f  : adresse=%p, valeur=%f\n", (void*)pf, f);
    printf("d  : adresse=%p, valeur=%f\n", (void*)pd, d);
    printf("ld : adresse=%p, valeur=%Lf\n", (void*)pld, ld);

    *pc = 20;
    *ps = 300;
    *pi = 6000;
    *pli = 80000;
    *plli = 900000;
    *pf = 3.0f;
    *pd = 5.0;
    *pld = 7.0;

    printf("\nAprès manipulation :\n");
    printf("c  : adresse=%p, valeur=%d\n", (void*)pc, c);
    printf("s  : adresse=%p, valeur=%d\n", (void*)ps, s);
    printf("i  : adresse=%p, valeur=%d\n", (void*)pi, i);
    printf("li : adresse=%p, valeur=%ld\n", (void*)pli, li);
    printf("lli: adresse=%p, valeur=%lld\n", (void*)plli, lli);
    printf("f  : adresse=%p, valeur=%f\n", (void*)pf, f);
    printf("d  : adresse=%p, valeur=%f\n", (void*)pd, d);
    printf("ld : adresse=%p, valeur=%Lf\n", (void*)pld, ld);

    return 0;
}
