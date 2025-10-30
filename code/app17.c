#include <stdio.h>

#define MAXLINE 1000  /* максимальная длина строки */

int getline_custom(char s[], int maxline);
void reverse(char s[]);

int main(void) {
    char line[MAXLINE];

    while (getline_custom(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

/* getline_custom: читает строку в s[], возвращает её длину */
int getline_custom(char s[], int maxline) {
    int c, i = 0;

    while (i < maxline - 1 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = (char)c;
    }
    if (c == '\n') {
        s[i++] = (char)c;
    }
    s[i] = '\0';
    return i;
}

/* reverse: переворачивает строку s[] на месте */
void reverse(char s[]) {
    int i, j;
    char temp;

    /* ищем конец строки */
    for (j = 0; s[j] != '\0'; ++j)
        ;

    /* если последний символ — \n, не трогаем его */
    if (j > 0 && s[j - 1] == '\n') {
        j--;
    }

    /* переворачиваем строку in-place */
    for (i = 0; i < j / 2; ++i) {
        temp = s[i];
        s[i] = s[j - 1 - i];
        s[j - 1 - i] = temp;
    }
}
