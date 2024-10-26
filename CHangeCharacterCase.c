#include<stdio.h>
void main()
{
    unsigned char letter;
    printf("Enter letter: ");
    scanf("%c", &letter);
    // printf("The letter is %c\n", letter);
    if (letter > 64 && letter < 91)
    printf("The lower case is %c\a", (letter + 32));
    else if (letter > 96 && letter < 123)
    printf("The upper case is %c\a", (letter - 32));
    else
    printf("other than character!!\a");
}