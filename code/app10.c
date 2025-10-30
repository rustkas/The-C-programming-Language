#include <stdio.h>

#define YES 1
#define NO  0

int main(void) {      /* подсчёт строк, слов и символов во вводе */
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\n' || c == '\t')
            inword = NO;
        else if (inword == NO) {
            inword = YES;
            ++nw;
        }
    }

    printf("Lines: %d  Words: %d  Chars: %d\n", nl, nw, nc);
    return 0;
}
