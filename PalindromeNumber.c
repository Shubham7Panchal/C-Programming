#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("enter word: ");
    scanf("%s", str1);

    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("The %s is Palindrome.", str1);
    }
    else
    {
        printf("The %s is not Palindrome.", str1);
    }
}