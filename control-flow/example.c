#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    float salary;
    printf("Enter salary: ");
    scanf("%f",&salary);


        if (salary>=1000000)
        {
            printf("Tax is 30% \nTax = %0.2f \n",salary*0.3);
        }
        else if (salary>=700000)
        {
            printf("Tax is 20% \nTax = %0.2f \n",salary*0.2);
        }
        else if (salary>=500000)
        {
             printf("Tax is 10% \nTax = %0.2f \n",salary*0.1);
        }
        else if (salary>=300000)
        {
             printf("Tax is 5% \nTax = %0.2f \n",salary*0.05);
        }
        else{
             printf("Tax is 0% \nTax = %0.2f \n",salary*0.0);
        }
        
        
        


    return 0;
}
