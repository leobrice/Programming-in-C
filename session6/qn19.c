#include <stdio.h>

int main()
{
    int no ,sum=0;

    printf("Enter No. of Marks:  ");
    scanf("%d",&no);

    int marks[no];

    for (int i = 0; i < no; i++)
    {
        printf("Enter mark %d: ", (i+1));
        scanf("%d",&marks[i]);

        sum+=marks[i];
    }
    
    // printing array
    printf("All Marks = [");
    for (int i = 0; i < no; i++)
    {
        printf("%d, ",marks[i]);
    }
    printf("] \n");


    printf("Sum = %d \n",sum);

    float avg=sum/no;
    
    printf("Mean = %.4f \n",avg);

    
    return 0;
}
