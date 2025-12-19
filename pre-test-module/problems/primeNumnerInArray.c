#include <stdio.h>

int main()
{
    int numberOfArrayElements,i,j;
    int numberArray[100];
    printf("Enter the number of elements: ");
    scanf("%d",&numberOfArrayElements);
    printf("Enter %d numbers to the array : \n",numberOfArrayElements);
    for(i=0;i<numberOfArrayElements;i++){
        scanf("%d",&numberArray[i]);
    }
    printf("\nArray Numbers are\n");
    
    for(i=0;i<numberOfArrayElements;i++){
        printf("%d\t",numberArray[i]);
    }
    
    printf("\n***********\n");
    
    for(i=0;i<numberOfArrayElements;i++){
        int isPrime = 1;
        if(numberArray[i] <= 1){
            isPrime = 0;
        }else if(numberArray[i] == 2){
            isPrime = 1;
        }else{
            for(j=2;j<numberArray[i];j++){
                if(numberArray[i] % j == 0){
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime){
            printf("\n%d is a prime number\n",numberArray[i]);
        }
    }
}
