#include <stdio.h>

/* count lines in input */

main()
{

    int c, blanks, nl, tabs;

    blanks = nl = tabs = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        else if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tabs;
    }
    printf("blanks:%d newlines:%d tabs:%d\n", blanks, nl, tabs);

}

