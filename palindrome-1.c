#include<stdio.h>
void ispalli(int n){
    int temp,r,sum=0;
    // printf("enter a number:");
    // scanf("%d",&n);
    temp=n;
    while(n>0){
    r=n%10;
    sum=(sum*10 )+ r;
    n=n/10;
    }
    if(temp==sum){
        printf("is palindrome");

    }
    else
    {
        printf("not a pallindrome");
    }
    
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    ispalli(n);
    // if(temp==sum){
    //     printf("is palindrome");

    // }
    // else
    // {
    //     printf("not a pallindrome");
    // }
    return 0;
}