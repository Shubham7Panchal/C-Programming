#include<stdio.h>
int main()
{
    int n, i=0, table, table_sum=0;
    printf("Enter the n table: ");
    scanf("%d", &n);
    for ( ; i<11; i++)
    {
        table = i*n;
        table_sum += table;
    }
    printf("The sum of table %d is %d", n, table_sum);
    return 0;
}