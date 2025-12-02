#include <stdio.h>
#include <stdint.h>

int main() {
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x11223344;
    long long int lli = 0x1122334455667788;
    float f = 1.0f;
    double d = 2.0;
    long double ld = 3.0;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n");
    printf("c  : adresse=%p, valeur=%02x\n", (void*)pc, (unsigned char)c);
    printf("s  : adresse=%p, valeur=%04x\n", (void*)ps, (unsigned short)s);
    printf("i  : adresse=%p, valeur=%08x\n", (void*)pi, (unsigned int)i);
    printf("li : adresse=%p, valeur=%08lx\n", (void*)pli, (unsigned long)li);
    printf("lli: adresse=%p, valeur=%016llx\n", (void*)plli, (unsigned long long)lli);

    printf("f  : adresse=%p, valeur=%08x\n", (void*)pf, *(uint32_t*)&f);
    printf("d  : adresse=%p, valeur=%016llx\n", (void*)pd, *(uint64_t*)&d);

    unsigned char *ldbytes = (unsigned char*)&ld;
    printf("ld : adresse=%p, valeur=", (void*)pld);
    for (int k = sizeof(long double)-1; k >= 0; k--) printf("%02x", ldbytes[k]);
    printf("\n");

    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0x87654321;
    *pli = 0xdeadbeef;
    *plli = 0xaabbccddeeff0011;
    *pf = 2.0f;
    *pd = 4.0;
    *pld = 5.0;

    printf("\nAprès manipulation :\n");
    printf("c  : adresse=%p, valeur=%02x\n", (void*)pc, (unsigned char)c);
    printf("s  : adresse=%p, valeur=%04x\n", (void*)ps, (unsigned short)s);
    printf("i  : adresse=%p, valeur=%08x\n", (void*)pi, (unsigned int)i);
    printf("li : adresse=%p, valeur=%08lx\n", (void*)pli, (unsigned long)li);
    printf("lli: adresse=%p, valeur=%016llx\n", (void*)plli, (unsigned long long)lli);

    printf("f  : adresse=%p, valeur=%08x\n", (void*)pf, *(uint32_t*)&f);
    printf("d  : adresse=%p, valeur=%016llx\n", (void*)pd, *(uint64_t*)&d);

    printf("ld : adresse=%p, valeur=", (void*)pld);
    for (int k = sizeof(long double)-1; k >= 0; k--) printf("%02x", ldbytes[k]);
    printf("\n");

    return 0;
}
