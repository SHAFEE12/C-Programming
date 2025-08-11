#include<stdio.h>

int mul(int ,int); // function declaration  , compiler ko hame pahle se batana hoga ki function kis type ka hai , nahi default int lega agar declare nahi kia to 


        int mul( int x , int y){
        int result;
        result=x*y;
        return result;
    }
    void main(){
    int a=10,b=20,c;
    c=mul (a,b);
    printf("%d",c);
}