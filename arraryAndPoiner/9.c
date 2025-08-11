#include<stdio.h>
int main(){
    int a[2][4] ={1,2,3,4,5,6,7,8,};

printf(" %d ",a);
printf(" %d",a[0]);
printf(" %d",&a);
printf(" %d ",a +1);
printf(" %d",a[0] +1);
printf(" %d",&a +1);
printf(" %d ",*a);
printf(" %d",*a[0]);
printf(" %d",**a);


    return 0;
}
