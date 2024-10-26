// try to solve more!!

#include <stdio.h>
void pointer(int g)
{
    printf("the address of g is %d\n",&g);
    
}
int main()
{
    int i = 4;
    printf("The value of i is %d\n", i);
    pointer(i);
    printf("The adress of i is %d\n", &i);
    return 0;
}
