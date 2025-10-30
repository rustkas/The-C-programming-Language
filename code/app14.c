#include <stdio.h>
#include <ctype.h>

#define MAX_WORD_LEN 20  /* длины >20 попадают в корзину overflow */

int main(void) {
    int c, len = 0;
    int i, j;
    int buckets[MAX_WORD_LEN + 1] = {0}; /* 1..MAX_WORD_LEN — точные длины, 0 — >MAX */

    while ((c = getchar()) != EOF) {
        if (isspace((unsigned char)c)) {
            if (len > 0) {
                if (len > MAX_WORD_LEN) ++buckets[0];
                else ++buckets[len];
                len = 0;
            }
        } else {
            ++len;
        }
    }
    /* если файл закончился посреди слова */
    if (len > 0) {
        if (len > MAX_WORD_LEN) ++buckets[0];
        else ++buckets[len];
    }

    puts("Гистограмма длин слов (горизонтальная):");
    for (i = 1; i <= MAX_WORD_LEN; ++i) {
        printf("%2d: ", i);
        for (j = 0; j < buckets[i]; ++j) putchar('*');
        printf("  (%d)\n", buckets[i]);
    }
    printf(">%2d: ", MAX_WORD_LEN);
    for (j = 0; j < buckets[0]; ++j) putchar('*');
    printf("  (%d)\n", buckets[0]);

    return 0;
}
