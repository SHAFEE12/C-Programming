#include<stdio.h>
int main(){
    int n;
    printf("enter anumber to check its prime or not");
    scanf("%d",&n);
    if (n%n==1&&n%1==n){
        printf("number is prime number");
       } else{
            printf("not prime");
        
    }
    return 0;
}