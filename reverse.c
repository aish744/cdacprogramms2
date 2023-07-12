#include<stdio.h>

void reverse(int n)
{ 
    
    int r,rev=0;
    while(n>0){
        r=n%10;
        rev= rev*10+r;
        n=n/10;
    }
        printf("reversed number is:%d", rev);

}

int main(){
    int n,r,rev;
    printf("enter a number: ");
    scanf("%d",&n);

    // while(n>0){
    //     r=n%10;
    //     rev= rev*10+r;
    //     n=n/10;
    // }
    reverse(n);
    // printf("reversed number is:%d", rev);
    return 0;
}