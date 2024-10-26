#include<stdio.h>
void main()
{
    int x;
    printf("Enter Day(1-7): ");
    scanf("%d", &x);
    switch(x)
     {
        case 1: printf("Monday");
                break;
        case 2: printf("Tuesday");
                break;
        
        case 3: printf("Wednesday");
                break;
        
        case 4: printf("Thursday");
                break;
        
        case 5: printf("Friday");
                break;
        
        case 6: printf("Saturday");
                break;
        
        case 7: printf("it's Sunday, Enjoy it!");
                break;
        
        default: printf("you haven't entered number accordingly day! ");
    }
}