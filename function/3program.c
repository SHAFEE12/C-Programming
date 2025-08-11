#include<stdio.h>
void g(); 
void h(); 
void f();

void f(){
    printf("1");
    g();
    printf("2");
}
void g(){
    printf("3");
    h();
    printf("4");
}
void h(){
    printf("5");
}
void main(){
    f();
    g();
    f();
}
