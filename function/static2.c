#include<stdio.h>
void fun (){
    static int a= 1;
        a++;
        

}
void main (){
   printf("%d",a);
}
// error ayega