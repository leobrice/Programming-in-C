#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char username[20];

    printf("Enter username: ");
    scanf("%s",username);


    (isalnum(username[0]) )? printf("VERY GOOD\n")  : printf("WRONG\n");
    
    return 0;
}
