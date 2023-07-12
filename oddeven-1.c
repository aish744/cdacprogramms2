#include<stdio.h>
int main()
{
    int n,r;
    printf("enter a number:");
    scanf("%d",&n);
    r=n%2;
    if(r==0){
        printf("it is a even number");

    }
    else{
        printf("it is odd number");
    }
    return 0;
}