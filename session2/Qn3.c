#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int age;
    char name[20];

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Age: ");
    scanf("%d",&age);

    (age>18 & strlen(name)>12)? printf ("THANK YOU \n"): printf("WRONG ENTRY \n");

    return 0;
}
