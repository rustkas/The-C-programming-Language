#include <stdio.h>

int main(void) {
    int lower, upper, step;
    float celsius, fahr;

    lower = 0;      /* нижний предел таблицы температур */
    upper = 100;    /* верхний предел */
    step = 10;      /* шаг изменения температуры */

    printf("Celsius   Fahrenheit\n");
    printf("--------------------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%7.0f %12.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
