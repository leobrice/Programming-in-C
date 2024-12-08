#include<stdio.h>
int main()
{   
    // Write a program that asks for the age of the user and compute the year they were born

    int age,YOB;

    printf("Enter Age: ");
    scanf("%d",&age);

    YOB=2024-age;

    printf("You were born in %d \n",YOB);
    
    return 0;
}
