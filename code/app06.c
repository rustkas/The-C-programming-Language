#include <stdio.h>
/**
 * @brief 
 * 
 * 
 * @return int 
 */
int main(void) {      /* подсчёт символов во вводе */
    long nc;

    nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }

    printf("%ld\n", nc);
    return 0;
}
