#include<stdio.h>
int main (){
char operator;
float x,y,result;
printf("enter a for addition\n");
printf("enter b for substraction\n");
printf("enter c for multiplication\n");
printf("enter d for division");
scanf("%c",&operator);
printf("enter two numbers :");
scanf("%f %f",&x,y);
switch (operator){
    case 'a': 
    result = x+y;
printf("sum = %f",result);
      break;
case 'b':
result=x-y;
printf("substraction = %f",result);
break;
 default :
 printf("404 error");
}


 return 0;
}