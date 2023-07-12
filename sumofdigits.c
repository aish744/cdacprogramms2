#include<stdio.h>

int Sum(int n)
{
    int r,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("the sum is= %d",sum);

}

int main(){
    int n,r,sum;
    // printf("enter a number: ");
    // scanf("%d",&n);

    // while(n>0)
    // {
    //     r=n%10;
    //     sum = sum +r;
    //     n=n/10;
    // }
    Sum(n);
    // printf("the sum is= %d",sum);
    return 0;
 

}
