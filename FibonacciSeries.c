#include <stdio.h>
int fib(int);
int fib(int n)
{
    if (n <= 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
void main()
{
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    printf("The series is: \n");
    for (int i = 0; i < num; i++)
    {
        if (i == (num - 1))
            printf("%d\t", fib(i));
        else
            printf("%d\t", fib(i));
    }
}