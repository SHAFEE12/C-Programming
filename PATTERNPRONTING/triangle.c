#include<stdio.h>
int main(){
    int row , col ,n;
    printf("enter the no. of rows :");
    scanf("%d",&n);

for (row =1 ; row<=n; row++)
{  
    for (col=1;col<=n-row;col++)
    {
        printf("*");

    }
    printf("\n");
}
    return 0;
}