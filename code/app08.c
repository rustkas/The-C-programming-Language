#include <stdio.h>

int main(void) {      /* подсчёт пробелов, табуляций и новых строк */
    int c;
    int spaces = 0;
    int tabs = 0;
    int newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++spaces;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    }

    printf("Spaces: %d\nTabs: %d\nNewlines: %d\n", spaces, tabs, newlines);
    return 0;
}
