#include <stdio.h>

main()
{
    int result;

    result = (getchar() != EOF);

    if (result == 0) {
        printf("it's 0");
    } else if (result == 1) {
        printf("it's 1");
    }

}

