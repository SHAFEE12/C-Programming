#include<stdio.h>
int sumOfdigits(int);

int sumOfdigits(int n){
    if(n<10){
        return n;

    }else{
        return n%10 + somOfdigits(n/10);

    }
}
void main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("%d ",sumOfdigits(x));
}