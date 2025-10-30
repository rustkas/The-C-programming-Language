#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

int getline_custom(char s[], int max) {
    int c, i = 0;
    while (i < max - 1 && (c = getchar()) != EOF && c != '\n') s[i++] = (char)c;
    s[i] = '\0';
    return i;
}

int rtrim(char s[]) {
    int i = 0;
    while (s[i] != '\0') ++i;            // длина
    while (i > 0 && isspace((unsigned char)s[i - 1])) --i; // срез хвоста
    s[i] = '\0';
    return i;
}

int main(void) {
    char line[MAXLINE];
    while (getline_custom(line, MAXLINE) > 0) {
        if (rtrim(line) > 0) {
            printf("%s\n", line);        // можно временно ставить "%s$\n" для проверки
        }
    }
    return 0;
}
