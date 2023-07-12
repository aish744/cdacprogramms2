#include<stdio.h>
void factorial(int n,int* fact)
{
    *fact=1;
    for (int i=1;i<=n;i++)
    {
        *fact=*fact*i;
    }
    // return fact;
}
int main(){
    int n,fact;
    printf("enter a number: ");
    scanf("%d",&n);
    // for(int i=1;i<=n;i++)
    // {
    //     fact=fact*i;
    // }
    factorial(n,&fact);
    printf("factorial of %d is: %d",n,fact);

}