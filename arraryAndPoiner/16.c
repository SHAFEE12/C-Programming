#include<stdio.h>
int main(){


    int a[5]={10,20,30,40,50};
    int *p;
    p =&a[0];
    printf("%d",*++p);
    ++*p;
    ++p;
    printf(" %d",*p++);
     return 0;
}