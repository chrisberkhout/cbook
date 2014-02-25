#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

main()
{

    float fahr, celsius;
    float lower, upper, step;

    /* lower limit of temperatuire scale */
    lower = 0;

    /* upper limit */
    upper = 300;

    /* step size */
    step = 20;

    printf("  f      c\n");
    printf("--- ------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}

