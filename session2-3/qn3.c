#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char Lname[20];

    printf ("Enter Password: ");

    scanf("%s",Lname);

    (strlen(Lname)> 7 )? printf("Sufficient\n")  : printf ("Insufficent\n");
    return 0;
}
