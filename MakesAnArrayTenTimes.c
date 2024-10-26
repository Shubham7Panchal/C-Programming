#include<stdio.h>
// a[i] = *(a+i)
// a = &a[0]
void ten_time(int [], int );
void ten_time(int b[], int x)
{
    for(int i=0; i<x; i++)
    {
        b[i]=b[i]*10;
    }
}

void main()
{
    int i,n,a[20];
    printf("set size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for( i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The ten times elements of array are:-\n");
    ten_time(&a[0], n);
    for(int i=0; i<n; i++)
    {
        printf("%d\t", *(a+i));

    }
}