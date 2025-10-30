#include <stdio.h>

#define MAXLINE 1000  /* максимальная длина входной строки */
#define LIMIT   80    /* порог длины строки */

int getline_custom(char line[], int maxline);

int main(void) {
    int len;                 /* длина текущей строки */
    char line[MAXLINE];      /* текущая строка */

    while ((len = getline_custom(line, MAXLINE)) > 0) {
        if (len > LIMIT) {
            printf("%s", line);
            /* если строка не оканчивается переводом строки, добавим его вручную */
            if (line[len - 1] != '\n') {
                putchar('\n');
            }
        }
    }
    return 0;
}

/* getline_custom: читает строку в line, возвращает её длину */
int getline_custom(char line[], int maxline) {
    int c, i = 0;

    while (i < maxline - 1 && (c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}
