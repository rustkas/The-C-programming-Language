#include <stdio.h>

int main(void) {
    int fahr;

    printf("Fahrenheit  Celsius\n");
    printf("--------------------\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%4d %10.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    return 0;
}
