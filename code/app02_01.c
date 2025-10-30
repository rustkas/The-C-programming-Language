#include <stdio.h>

int main(void) {
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;      /* нижний предел таблицы температур */
    upper = 300;    /* верхний предел */
    step = 20;      /* шаг изменения температуры */

    printf("Fahrenheit  Celsius\n");
    printf("--------------------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
