#include <stdio.h>
#include <ctype.h>

int main(void) {
    int c, nl = 0;
    long long nw = 0, nc = 0;
    int inword = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;

        if (isspace((unsigned char)c)) {
            inword = 0;
        } else if (!inword) {
            inword = 1;
            ++nw;
        }
    }

    printf("Lines: %d  Words: %lld  Chars: %lld\n", nl, nw, nc);
    return 0;
}
