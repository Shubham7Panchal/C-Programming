
#include <stdio.h>
void star_ptrn(int );
void main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    star_ptrn(n);
}

void star_ptrn(int x)
{
    int i,j,k;
    printf("\n");
    for (i = 1; i <= x; i++)
    {
        for (int k = 1; k <= ( x - i); k++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
printf("\n");
}