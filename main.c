#include <stdio.h>
#include <stdlib.h>
#include "portability.h"

int main()
{
    int i = 0;
    while (!kbhit())
    {
        printf("Temps: %d secondes\n", i);
        gotoligcol(0,0);
        i++;
        Sleep(1000);
    }

    printf("\n\n\n=> %c", getchar());

    return 0;
}
