#include<stdio.h>
int main(){

    int a[4]={10,20,30,40};
    int *p;
    p=&a[0];
  //  printf("%d",p[0]);
//printf("%d",*p);
int i;
for (i=0;i<4;i++)
printf("  %d  ",p[i]);
printf("")

    return 0;
}