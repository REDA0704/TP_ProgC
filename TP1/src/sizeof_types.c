#include <stdio.h>

int main() {
    printf("Taille des types de base en octets :\n\n");

    /* i. char */
    printf("sizeof(char) = %zu octet(s)\n", sizeof(char));
    printf("sizeof(signed char) = %zu octet(s)\n", sizeof(signed char));
    printf("sizeof(unsigned char) = %zu octet(s)\n\n", sizeof(unsigned char));

    /* ii. short */
    printf("sizeof(short) = %zu octet(s)\n", sizeof(short));
    printf("sizeof(signed short) = %zu octet(s)\n", sizeof(signed short));
    printf("sizeof(unsigned short) = %zu octet(s)\n\n", sizeof(unsigned short));

    /* iii. int */
    printf("sizeof(int) = %zu octet(s)\n", sizeof(int));
    printf("sizeof(signed int) = %zu octet(s)\n", sizeof(signed int));
    printf("sizeof(unsigned int) = %zu octet(s)\n\n", sizeof(unsigned int));

    /* iv. long int */
    printf("sizeof(long int) = %zu octet(s)\n", sizeof(long int));
    printf("sizeof(signed long int) = %zu octet(s)\n", sizeof(signed long int));
    printf("sizeof(unsigned long int) = %zu octet(s)\n\n", sizeof(unsigned long int));

    /* v. long long int */
    printf("sizeof(long long int) = %zu octet(s)\n", sizeof(long long int));
    printf("sizeof(signed long long int) = %zu octet(s)\n", sizeof(signed long long int));
    printf("sizeof(unsigned long long int) = %zu octet(s)\n\n", sizeof(unsigned long long int));

    /* vi. float (pas de version signed / unsigned) */
    printf("sizeof(float) = %zu octet(s)\n\n", sizeof(float));

    /* vii. double (pas de version signed / unsigned) */
    printf("sizeof(double) = %zu octet(s)\n\n", sizeof(double));

    /* viii. long double (pas de version signed / unsigned) */
    printf("sizeof(long double) = %zu octet(s)\n", sizeof(long double));

    return 0;
}
