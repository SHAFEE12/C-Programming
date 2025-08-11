#include<stdio.h>
void greeting (int n)
{
if ( n ==0) 
 return;
printf("  i want to fuck \n");
greeting(n-1);

}

int main(){
    int n;
    printf(" how many times you want to print i love you : ");
    scanf("%d",&n);
    greeting(n);
    return 0;

}