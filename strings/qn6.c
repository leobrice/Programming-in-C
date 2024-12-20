#include <stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char username[20];
    printf("Enter Username: ");
    scanf("%s",username);

    printf("The number of characters are %d  \n",strlen(username));


    return 0;
}
