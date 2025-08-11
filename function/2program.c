#include<stdio.h>
void f(){
    printf("1");
}
void g(){
    printf("2");
}
void main(){
    f();
    g();
    f();
    g();

}