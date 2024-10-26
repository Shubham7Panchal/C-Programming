
#include<stdio.h>
void main()
{
    int n, grt[50];
    int *ptr;
    printf("Enter how many numbers you have: ");
    scanf("%d", &n);

    printf("Enter element 1 by 1: ");
    for (int i = 0; i <= n-1; i++)
    {
        scanf("%d", &grt[i]);
    }

    ptr = grt;
    for (int i = 0 ; i <= n-1; i++)
    {
        if( *ptr < *(ptr+i))
        {
            ptr = &grt[i];
        }
    }
    printf("The Greatest element is %d", *ptr);
}