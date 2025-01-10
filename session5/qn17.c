#include <stdio.h>


int main(int argc, char const *argv[])
{
    int min,max,sum=0;

    printf("Enter Min: ");
    scanf("%d",&min);

    printf("Enter Max: ");
    scanf("%d",&max);


    for( int i=min; i<=max; i++){
        if(i%2==1){
            sum=sum+i;
        }else{
            continue;
        }

        printf("%d => %d \t",i,sum);

    }
    printf("\nSum =  %d",sum);

    return 0;
}
