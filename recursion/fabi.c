#include <stdio.h>
int fibo (int n)
{
    if (n<=2) return 1;
 //int recAns = fibo((n-1) +fibo(n-2));
// return recAns;
return fibo(n-1)+fibo(n-2);
}
int main(){

    int n;
    printf("enter the number ");
    scanf("%d",&n);
    //int x = fibo(n);
    printf("%d", fibo(n));
    return 0;
}