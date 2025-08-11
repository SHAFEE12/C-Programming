#include<stdio.h> 
int power( int a , int b ) 
{
if (a== 0) return 1;
int recANS = a* power (a , b-1);
return recANS;
} 
int main (){
    int a;
    int b;
    printf("enter base ");
    scanf("%d",&a);
     printf("enter power");
    scanf("%d",&b);
   int p = power( a , b );
   printf("%d raised to the power is %d",a, b, p);
    return 0;
}
