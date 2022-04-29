#include <stdio.h>

int main()
{

    int i, j, k, l, n;
    printf("ENTER LENGTH OF BASE OF THE TRIANGLE : ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("  ");
        }
        if (i <= n - 1)
        {
            for (k = 3; k <= 4 * i - 1; k++)
            {
                if ((k == 3) || (k == 4 * i - 1))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        else
        {
            for (l = 1; l <= i; l++)
            {
                printf("*   ");
            }
            printf("\n");
        }
    }
}
