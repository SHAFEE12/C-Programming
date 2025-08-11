#include<stdio.h>
int main(){
    
    int i, j,x,totalpairs=1;
    printf("enter the number ");
    scanf("%d",&x);
      int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 for(i=0; i<=20; i++){
     for (j=i+1; j<=20; j++){
if(arr[i]+arr[j]==x ){
totalpairs++;
 printf("(%d ,%d) \n", arr[i],arr[j]);
 

     }
     }
     }
     printf(" tolal number of pairs : %d",totalpairs);
     
    return 0;
     
}