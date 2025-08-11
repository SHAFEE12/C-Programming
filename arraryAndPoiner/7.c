#include<stdio.h>
int main(){

int a[2][3];
printf("%d ",a);
printf(" %d",a[0]);
printf(" %d",&a);
printf(" %d ",a +1);
printf(" %d",a[0] +1);
printf(" %d",&a +1);
    return 0;
}