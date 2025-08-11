#include<stdio.h>
int main(){
int x,row,star,space,n;
printf("enter the of no. rows");
scanf("%d",&n);
x=2*n-2;
for(row=1;row<=n;row++)
{
    for(star=1;star<=row;star++)
    printf("*");
    for(space=1;space<=x;space++)
    printf(" ");
    for(star=1;star<=row;star++)
    printf("*");
    x=x-2;
    printf("\n");
    }
x=0;
for(row=1;row<=n;row++)
{
    for(star=1;star<=n+1-row;star++)
    printf("*");
    for(space=1;space<=x;space++)
    printf(" ");
    for(star=1;star<=n+1-row;star++)
    printf("*");
    x=x+2;
    printf("\n");
}

    return 0;
}