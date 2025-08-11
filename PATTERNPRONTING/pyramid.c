#include<stdio.h>
int main (){
    int row ,space,star ,n,x;
    printf("enter no. of rows :");
 scanf("%d",&n);
x=1;
  for (row = 1; row<=n; row++){
    for (space=1; space <=n-row; space++)
    printf(" ");
    for (star =1; star<=x; star++)
    printf("*");
    x=x+2;
printf("\n");
  }
  return 0;
}