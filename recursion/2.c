 #include<stdio.h>
 void print (int n)
 {
    if(n<1)
    return ;
    else{
        print (n-1);
        printf("%d",n);
        
    }
 }
 int main(){
    print (3);

 }