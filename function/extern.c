#include<stdio.h>
void f(){
    extern int x; //to avoid ce
    x++;
    printf("%d",x);

}
int x;
void g(){
    ++x;
    printf("%d",x);
}
void main(){
    x++;
    printf("%d",x);
}