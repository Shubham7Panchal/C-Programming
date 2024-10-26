#include<stdio.h>
void main()
{
    int i =0,arr0 = 0, last_arr;
    char temp,str[20];
    printf("Enter word: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }
    last_arr = (i-1);
    while(arr0 < last_arr)
    {
    temp = str[arr0];
    str[arr0] = str[last_arr];
    str[last_arr] = temp;
    arr0++;
    last_arr--;
    }

    printf("%s", str);
}