#include <stdio.h>

int main(void) {      /* подсчёт символов во вводе */
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;   /* пустое тело цикла */

    printf("%.0f\n", nc);
    return 0;
}
