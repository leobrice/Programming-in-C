#include<stdio.h>
#include<string.h>


int main()
{   
    char value[30];

    printf("Enter a word: ");
    scanf("%s",value);

    ( strlen(value)>7)? printf("STRONG\n") : printf("TOO SHORT\n");


    return 0;
}

