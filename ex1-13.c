#include <stdio.h>

/* inside a word */
#define IN 1

/* outside a word */
#define OUT 0

#define MAX_LENGTH 10

main()
{
    int c, state, length;
    int l, m;
    int max_freq = 0;
    char marker;

    int lengths[MAX_LENGTH] = { 0 };
    int longer = 0;

    state = OUT;
    length = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                state = OUT;
                if (length <= MAX_LENGTH)
                    ++lengths[length-1];
                else
                    ++longer;
                length = 0;
            }
        } else {
            state = IN;
            ++length;
        }
    }

    putchar('\n');

    for (l = 0; l < MAX_LENGTH; ++l) {
        printf(" %2d: ", l+1);
        for (m=0; m < lengths[l]; ++m)
            putchar('=');
        putchar('\n');
    }

    printf(">%0d: ", MAX_LENGTH);
    for (m=0; m < longer; ++m)
        putchar('=');
    putchar('\n');
    putchar('\n');


    for (l = 0; l < MAX_LENGTH; ++l) {
        if (lengths[l] > max_freq)
            max_freq = lengths[l];
    }
    if (longer > max_freq)
        max_freq = longer;

    for (l = max_freq; l > 0; --l) {
        for (m = 0; m < MAX_LENGTH; ++m) {
            if (lengths[m] >= l)
                printf("   |");
            else
                printf("    ");
        }
        if (longer >= l)
            printf("   |");
        else
            printf("    ");
        putchar('\n');
    }
    for (m = 0; m < MAX_LENGTH; ++m) {
        printf(" %3d", m+1);
    }
    printf(" >%2d", MAX_LENGTH);
    putchar('\n');

}

