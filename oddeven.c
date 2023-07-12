#include<stdio.h>
void iseven(int n){
    int r = n % 2;
    if(r==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");

    }
}

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    iseven(n);
    return 0;
}