#include <stdio.h>

int main(int argc, char const *argv[])
{
    int length, mark,sum=0;

    printf("Enter Length: ");
    scanf("%d",&length);

    int marks[length];

    for (int i = 0; i < length; i++)
    {
        printf("\nEnter marks: ");
        scanf("%d",&mark);

        if (mark-7<40)
        {
            marks[i]=40;
        }
        else{        
        marks[i]=mark-7;
        }
        
        sum+=marks[i];
    }
    

    printf("\n Marks=[");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ",marks[i]);
    }
    printf("]\n");

    printf("\nSum = %d",sum);

    float avg=sum/length;
    printf("\nAverage = %.3f \n",avg);


    //deviation
    for (int i = 0; i < length; i++)
    {
        sum=0;
        marks[i]=marks[i]-avg;

        sum+=marks[i];
    }

    float avg2= sum/length;
    printf("Average Deviation = %.3f",avg2);
    

    return 0;
}
