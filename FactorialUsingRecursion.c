#include <stdio.h>
int factorial(int );
int main()
{
    int a, fctoril;
    printf("Enter the factorial number: ");
    scanf("%d", &a);
    // fctoril = factorial(a);
    printf("the factorial of %d is %d.", a, factorial(a));
}
// Now we will use Recursion in function Definition.
int factorial(int x)
{
    int fact;
    if (x == 1 || x == 0)
    {
        fact = 1;
    }
    else
    {
        fact = x * factorial(x - 1);
    }
return fact;
}  