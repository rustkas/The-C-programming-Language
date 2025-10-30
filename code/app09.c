#include <stdio.h>

int main(void) {      /* замена нескольких пробелов одним */
    int c;
    int prev_was_space = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!prev_was_space) {
                putchar(c);
                prev_was_space = 1;
            }
        } else {
            putchar(c);
            prev_was_space = 0;
        }
    }

    return 0;
}
