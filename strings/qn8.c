#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char username[20];

    printf("Enter username: ");
    scanf("%s",username);

    int no = strlen(username)-1;
    // printf ("%d,%c",no,username[no]);

    (isalnum(username[no]) )? printf("IS ALPHANUMERIC VERY GOOD\n")  : printf("NOT ALPHANUMERIC WRONG\n");
    
    return 0;
}
