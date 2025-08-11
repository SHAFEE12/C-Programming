#include<stdio.h>
int main (){
    int x= 10;
    int *p;
    int **q;
    p =&x;
    q =&p;
    printf(" %u ",p);
        printf(" %u ",*p);
        printf("  %u",q);
         printf(" %u",*q);
        printf(" %u",**q);
        
    
    return 0;
                                          