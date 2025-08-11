#include<stdio.h>

int result(int a , int b){
     int result = a+b;
    return result;
    
}
int main(){
    int a,b;
    printf("enter a and b number");
    scanf("%d &d",&a,&b);
    printf("%d",result(a,b));
}