#include <stdio.h>

#define IN  1   /* внутри слова */
#define OUT 0   /* вне слова */

int main(void) {
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');  /* конец слова → новая строка */
                state = OUT;
            }
        } else {
            putchar(c);         /* печатаем символ слова */
            state = IN;
        }
    }

    return 0;
}
