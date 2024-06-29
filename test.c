#include <stdio.h>

int main()
{

    // pyq 1 - 6 8 10 12 14
    int i = 5;

    while (++i <= 15)
    {
        printf("%d ", i++);
    }

    printf("\n");

    // pyq 2 - 6 9 12
    for (i = 1; i < 12; i++)
    {
        if (++i < 6)
        {
            continue;
        }
        else
        {
            printf("%d ", i++);
        }
    }

    printf("\n");
}
