// armstrong number
#include<stdio.h>
#include<math.h>
void main ()
{
    int num,n;
    float sc=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    for( int i = 0 ;i<3 ;i++ )
    {
        if(n>=10)
        {
            sc += pow(n%10, 3);
            n=n/10;
        }
        else
        {
            sc += pow(n, 3);
        }
    }
    printf("%f\n", sc);
    
    if (sc==num)
    {
        printf("The number is armstrong.");
    }
    else
    {
        printf("The number is not armstrong.");
    }
}