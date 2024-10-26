#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n, *ptr;
    printf("Enter number of Elements: ");
    scanf("%d", &n);
   
    ptr = (int *)malloc(n * sizeof(int));           //ptr = (int *)calloc(n , sizeof(int));
    if (ptr == NULL)
    {
        printf("the memory allocation failed!!\n");
        exit(0);
    }
    else
    {
        printf("the Memory Allocated successfully using malloc\n");
        printf("The arrays elements are: \n");
        for (i = 0; i < n; i++)
        {
            ptr[i] = (i + 1);
            printf("%d  ", ptr[i]);
        }
        free(ptr);
        printf("\nThe allocated memory successfully free.");
    }
}
