#include <stdio.h>

/* replace multiple spaces with a single space */

main()
{

    int last_c, c;

    while ((c = getchar()) != EOF) {
        if ((c != ' ') || (last_c != ' '))
            putchar(c);
        last_c = c;
    }

}

