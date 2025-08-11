#include<stdio.h>
int main(){

int x= 10;
int *p;
p=&x;
printf(" %u ",p);
printf(" %u ",*p);
printf(" %u",x);
    return 0;
}