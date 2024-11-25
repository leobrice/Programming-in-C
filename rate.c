#include<stdio.h>


int main(int argc, char const *argv[])
{
    /*
    Write a program that accepts from the user the values for PRINCIPLE, 
    INTEREST RATE, AND TIME and the program should then compute the Simple Interest

    */




     // Input values
    float P , R , T,SI;

    printf("\n Enter Values \n\nPrincipal:  ");
    scanf("%f",&P);

    printf("Rate: ");
    scanf("%f",&R);

    printf("Time (Years): ");
    scanf("%f",&T);


    // Calculate simple interest
    SI = (P * T * R) / 100;

    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

    
    return 0;
}
