#include<stdio.h>

void swap (int *P , int *q ) 
{
    int temp, p ,q;
    temp =*p;
    *p =*q;
    *q = temp;

}


int  main(){
     int a =10,  b= 20;
    //  printf("%d %d ",a,b);
     swap(&a, &b);
     printf(" %d  %d",a,b);


    return 0;
}