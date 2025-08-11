#include<stdio.h>
int main(){

    int space,row,star,n;
    printf("enter the no. of rows :");
    scanf("%d",&n);
    for(row=1; row<=n; row++){
for (space =1;space<=n-row;space++)
        printf(" ");
        for (star=1;star<=row;star++)
        printf("*");
   printf("\n");
    }
   
    return 0;
}