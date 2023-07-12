#include<stdio.h>

void swap(int a,int b,int temp)
{
    temp=a;
    a=b;
    b=temp;
    printf("swapped numbers are a=%d,b=%d", a,b);
}

int main(){
    int a=1,b=2,temp;
    // temp = a;
    // a=b;
    // b=temp;
    // printf("swapped numbers are a=%d,b=%d", a,b);
    swap(a,b,temp);
    return 0;
}