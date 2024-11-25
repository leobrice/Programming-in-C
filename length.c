#include<stdio.h>


int main(int argc, char const *argv[])
{
    /*

    Write a program that asks the user for the length of the side of a square 
    and the program should compute the perimeter of the square and its area. 
	The output on the screen should be something like --- 	"
    The Area is 24 sq. cm, and the Perimeter is 18cm" (24 and 18 are examples only)

    */


   int length,perimeter,area;

   printf("Enter Length: ");
   scanf("%d",&length);

   perimeter = length * 4;
   area = length * length ;


   printf ("\n The Area is %d sq cm and the Perimeter is %dcm \n",area,perimeter);



    return 0;
}
