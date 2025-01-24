#include <stdio.h>


int main()
{

    int marks[2][20];   

    for (int row = 0; row < 2; row++)
    {   
        if (row==0)
        {
            printf("Entering Physics");
        }
        else
        {
            printf("\nEntering Chemistry");
        }
        
               

        for (int col = 0; col < 20 ; col++)
        {
            printf("\nStudent %d:  ",(col+1));
            scanf("%d",&marks[row][col]);
        }
        
        
    }


    // for (int row = 0; row < 2; row++)
    // {
    //     if (row == 0)
    //     {
    //         printf("\n\nPhysics Marks:\n");
    //     }
    //     else
    //     {
    //         printf("\n\nChemistry Marks:\n");
    //     }

    //     for (int col = 0; col < 20; col++)
    //     {

    //         printf("\nStudent %d : %d  ",(col+1),marks[row][col]);
    //     }
    // }


         // Output marks in table format
    printf("\n-------------------------------------\n");
    printf("| Student   | Chemistry |  Physics  |\n");
    printf("-------------------------------------\n");

    for (int col = 0; col < 20; col++) {
        printf("| Student%-3d | %-10d | %-7d |\n", 
               col + 1, 
               marks[0][col], //  (row 1)
               marks[1][col]  //  (row 0)
        );
    }

    printf("-------------------------------------\n");




    return 0;
}
