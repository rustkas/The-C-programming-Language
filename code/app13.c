#include <stdio.h>

int main(void) { /* count digits, whitespace, and other chars */
    int c, i, nwhite, nother;
    int ndigit[10];
    int has_digits = 0; /* флаг наличия хотя бы одной цифры */

    nwhite = 0;
    nother = 0;

    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
            has_digits = 1; /* нашли хотя бы одну цифру */
        } else {
            ++nother;
        }
    }

    if (has_digits) { /* проверка: были ли цифры во вводе */
        printf("digits =");
        for (i = 0; i < 10; ++i) {
            printf(" %d", ndigit[i]);
        }
        printf("\n");
    }

    printf("white space = %d, other = %d\n", nwhite, nother);

    return 0;
}
