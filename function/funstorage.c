#include<stdio.h>
int main(){
    int a = 10;
    {
        int b= 20;
        printf("%d %d",a,b);

    }
    a=a+1;
    printf("%d %d",a,b);

}
// error ayega