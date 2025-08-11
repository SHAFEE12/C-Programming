#include<stdio.h>

int pow(int  a , int n){
    if(n==1)
    return a;
    else 
    return a * pow(a,n-1);

}
void main(){
    int result;
    result=pow(5,3);
printf("%d",result);

}