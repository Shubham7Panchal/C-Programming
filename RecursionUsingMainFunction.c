
#include <stdio.h>
void main()
{
    static int i = 5;
    if (--i) 
    {
        printf("%d\t", i);
        main(1);
    }
}
// void main(void)
// {
//     static int i = 5;
//     if (--i) 
//     {
//         printf("%d\t", i);
//         main(10);
//     }
// }