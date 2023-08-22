#include <stdio.h>

/* Print Fahrenheit-Celsius table for f = 0, 20, ..., 300 */

int main() {
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;     /* lower limit */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
