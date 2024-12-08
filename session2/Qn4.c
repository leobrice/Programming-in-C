#include<stdio.h>

int main()
{   
    int radius, area;

    printf("Enter Radius: ");
    scanf("%d",&radius);

    area = (22/7) * radius * radius ;


    ( radius <= 0 )? 
        printf("Enter Radius >0 : "), 
        scanf("%d",&radius) ,
        printf("The area is %d \n", ((22/7)*radius*radius))
        : 
         
        
        printf("The Area is %d \n",area);

    return 0;
}
