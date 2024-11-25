#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*
        Write a program that takes in an integer number
        and prints out the remainder, if that number is divided by 2
    */


    int N,remainder;

    printf("Enter Number: ");

    scanf ("%d",&N);

    remainder =N % 2;

    printf ("The remainder is %d \n",remainder);


    return 0;
}
