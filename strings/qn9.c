#include <stdio.h>
#include <string.h>

int main()
{
    char lname[20], fname[20] ,temp[20];

    printf("Enter First Name: ");
    scanf("%s",fname);

    printf("Enter Last Name: ");
    scanf("%s",lname);

    // printf ("%s \t %s ",fname,lname);
    strcpy(temp , fname);
    strcpy(fname , lname);
    strcpy(lname , temp );
    

    printf("First Name: %s \n", fname);
    printf("Last Name: %s  \n", lname);

    return 0;
}
