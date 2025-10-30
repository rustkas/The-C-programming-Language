#include <stdio.h>

#define LOWER 0    /* нижний предел таблицы */
#define UPPER 300  /* верхний предел */
#define STEP 20    /* шаг изменения температуры */

int main(void) {   /* таблица перевода Фаренгейт → Цельсий */
    int fahr;

    printf("Fahrenheit  Celsius\n");
    printf("--------------------\n");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%4d %10.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    return 0;
}
