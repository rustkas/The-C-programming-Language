#include <stdio.h>

#define MAXLINE 1000

int getline_custom(char s[], int lim);
void copy_line(char to[], const char from[]);

int main(void) {
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline_custom(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy_line(longest, line);
        }
    }

    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

int getline_custom(char s[], int lim) {
    int c, i = 0;
    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = (char)c;
    if (c == '\n')
        s[i++] = (char)c;
    s[i] = '\0';
    return i;
}

void copy_line(char to[], const char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
