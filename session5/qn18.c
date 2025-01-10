#include <stdio.h>


int main(int argc, char const *argv[])
{
    int min,max,sum=0;

    char value;

    printf("Enter Min: ");
    scanf("%d",&min);

    printf("Enter Max: ");
    scanf("%d",&max);

    getchar();

    printf("Choose 'E' for Even 'O' for Odd: ");
    scanf("%c",&value);




    for( int i=min; i<=max; i++){
        if (value=='E' || value == 'e')
        {
            if(i%2==0){
            printf("%d \t ",i);
            }
            else{
                continue;
            }
        }else if (value=='O' || value == 'o')
        {
            if(i%2==1){
            printf("%d \t ",i);
            }else{
                continue;
            }

        }else{
            printf("Please Enter correct values E or O");
        }
        
        

        

    }
    

    return 0;
}
