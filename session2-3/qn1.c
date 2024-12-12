#include <stdio.h>
#include <string.h>

int main()
{   
    char name[19];

    printf ("Enter name: ");
    scanf ("%s",name);

    printf(" Your name is %d characters long\n", strlen(name));
    
    return 0;
}
