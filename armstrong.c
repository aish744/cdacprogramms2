#include<stdio.h>

void armstrong(int n)
{
    int r,temp,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum = sum+(r*r*r);
        n=n/10;
    }
    if(temp == sum)
    printf("it is armstrong number");
    else 
    printf("not a armstrong number");
   
    
}

int main(){
    int n;
    int temp,sum;
    // int n,r,temp,sum=0;
    // printf("enter a number");
    // scanf("%d",&n);
    // temp =n;
    // while(n>0)
    // {
    //     r = n%10;
    //     sum = sum +(r*r*r);
    //     n=n/10;

    // }
    armstrong(n);
    // if(temp == sum)
    // printf("it is armstrong number");
    // else 
    // printf("not a armstrong number");
    return 0;
}