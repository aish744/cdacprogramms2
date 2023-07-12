
#include <stdio.h>

int isPrime(int num) {
    int count=0;
    // if(num <=1) {
    //     printf("not a prime");

    // }
    for(int i=1; i <= num;i++){
        if(num % i ==0){
            count++;
        }
    }

    if(count==2)
    {
        printf("prime number");

    }
    else{
        printf("not a prime number");
    }
    return 0;
}

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    // if(num <=1) {
    //     printf("not a prime");

    // }
    isPrime(num);
     
    return 0;
}