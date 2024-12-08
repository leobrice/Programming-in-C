#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[12];
    printf("Enter name: ");
    // gets(name);

    gets(name);


    (isupper(name[0]))? printf("True \n %s",name): printf("False\t %s",name);

    return 0;
}
