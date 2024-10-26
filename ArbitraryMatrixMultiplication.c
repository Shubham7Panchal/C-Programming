// Matrix multiplication of arbitrary rows &columns.
#include<stdio.h>
int main()
{
    int row1,col1,row2,col2;
    int a[5][5], b[5][5], c[5][5] ={0};
    printf("\n");
    printf("For Matrix 1:- \n");
    printf("Enter rows and colummns: ");
    scanf("%d%d", &row1, &col1);
    for( int i = 0 ; i < row1; i++)
    {
        printf("Enter row %d: ", (i+1));
        for( int j = 0 ; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("For Matrix 2:- \n");
    printf("Enter rows and colummns: ");
    scanf("%d%d", &row2, &col2);
    for( int i = 0 ; i < row2; i++)
    {
        printf("Enter row %d: ", (i+1));
        for( int j = 0 ; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
   
    for( int i = 0 ; i < row1; i++)
    {
        for( int j = 0 ; j < col2; j++)
        {
            for( int k = 0 ; k < col1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    } 
    printf("\n");
    printf("The Matrix formed:- \n");  
    for( int i = 0 ; i < row1; i++)
    {
        for( int j = 0 ; j < col2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}