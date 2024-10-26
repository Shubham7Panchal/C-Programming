
//here Swap doesn't work on calling by value but works on calling by reference.
#include<stdio.h>
int wrong_swap(int , int );
int swap(int* , int* );
void main()
{
    int a , b ;
    printf("Enetr a: ");
    scanf("%d", &a);
    printf("Enetr b: ");
    scanf("%d", &b);
    printf("before swap = %d and %d\n", a, b);
    wrong_swap(a,b);
    printf("After swap by value = %d and %d\n", a, b);
    swap(&a,&b);
    printf("After swap by reference = %d and %d\n", a, b);
}

int wrong_swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return x,y;
}

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return *x, *y;
}

