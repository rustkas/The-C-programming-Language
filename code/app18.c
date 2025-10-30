#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#define MAXLINE 1000

int main(void) {
    wchar_t wline[MAXLINE];
    setlocale(LC_ALL, "");  // включаем поддержку UTF-8

    while (fgetws(wline, MAXLINE, stdin)) {
        /* ищем длину */
        int len = 0;
        while (wline[len] != L'\0' && wline[len] != L'\n') {
            len++;
        }

        /* переворачиваем строку по символам */
        for (int i = 0; i < len / 2; ++i) {
            wchar_t tmp = wline[i];
            wline[i] = wline[len - 1 - i];
            wline[len - 1 - i] = tmp;
        }

        /* печатаем результат */
        fputws(wline, stdout);
        putchar('\n');
    }

    return 0;
}
