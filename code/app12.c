#include <stdio.h>
#include <ctype.h>

int main(void) {
    int c;
    long long nw = 0;      /* количество слов */
    int inword = 0;        /* 0 — вне слова, 1 — внутри слова (корректного) */

    while ((c = getchar()) != EOF) {
        unsigned char uc = (unsigned char)c;

        if (!inword) {
            /* Начало слова допускается только с буквы */
            if (isalpha(uc)) {
                inword = 1;
            }
            /* иначе остаёмся вне слова */
        } else {
            /* Мы внутри слова: разрешены буквы, цифры и апостроф */
            if (isalnum(uc) || uc == '\'') {
                /* остаёмся внутри слова */
            } else {
                /* слово закончилось при встрече разделителя */
                ++nw;
                inword = 0;
            }
        }
    }

    /* если файл закончился посреди слова — досчитаем его */
    if (inword) {
        ++nw;
    }

    printf("%lld\n", nw);
    return 0;
}
