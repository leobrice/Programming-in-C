#include <stdio.h>
#include <string.h>

int main()
{
    int k;
    char hello[]="THe Mighty UDSM";

    for (k=3;k<=strlen(hello)-8;k++)
    {
        printf("%d\n", 10*k);
    }
    

    return 0;
}
