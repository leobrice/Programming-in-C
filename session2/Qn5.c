#include<stdio.h>


int main(int argc, char const *argv[])
{
    
    int age;


    printf("Enter Age: ");

    scanf("%d",&age);

    (age>10)? printf("VALID AGE \n") : printf("WRONG ENTRY \n");
    return 0;
}
