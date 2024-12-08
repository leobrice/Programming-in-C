#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*
    Write a program that takes from the user the radius of a circle 
    and the program should compute the area of the circle and its circumference. 
	The Output on the screen should look like this: 
    "The Area is 56 sq. cm and Circumference is 28cm"    
    
    */

    int radius,circumference,area;


    printf("Enter Radius: ");

    scanf("%d",&radius);

    area = 2 * (22/7) * radius * radius ;

    circumference = 2 * (22/7) * radius ;


    printf ("The Area is %d sq. cm and Circumference is %dcm \n" ,area,circumference);

    return 0;
}
