#include<stdio.h>
void f(int n){
    if (n<1)
    return ;
    else{
        printf("%d",n);
        f(n-1);
        printf("%d",n);
    }
}
int main (){
    f(3);
}