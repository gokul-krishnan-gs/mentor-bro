#include <stdio.h>

int main()
{
    int number,i;
    int isPrime = 1;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number <= 1){
        isPrime = 0;
    }else if(number == 2){
        isPrime = 1;
    }else{
        for(i=2;i<number;i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime){
        printf("%d is a prime number",number);
    }else{
        printf("%d is not a prime number",number);
    }

}
