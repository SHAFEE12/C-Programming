#include <stdio.h>
int stairs (int n){
    if (n<=2) return n;
    int ways =stairs(n-1)+stairs(n-2);
    return ways;
}



int main(){
int n ;
printf("enter the number of stairs :");
   scanf("%d",&n);
   int ways =stairs(n);
   printf(" %d",ways );
    return 0;
}