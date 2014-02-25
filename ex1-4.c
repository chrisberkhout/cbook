#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    /* lower limit of temperature scale */
    lower = -17;

    /* upper limit */
    upper = 148;

    /* step size */
    step = 10;

    /* header */
    printf("%s\t%s\n", "c", "f");
    printf("%s\t%s\n", "---", "---");

    celsius = lower;
    while (celsius <= upper) {
        fahr = ((celsius * 9 ) / 5) + 32;
        printf("%3d\t%3d\n", celsius, fahr);
        celsius = celsius + step;
    }

}

