#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("\nEOF reached, getchar() returned %d\n", c);
    return 0;
}
