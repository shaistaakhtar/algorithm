#include<stdio.h>  
int main()    
{    
 int i,a,b;
 int power=1; 
 printf("Enter value of a and b: ");    
  scanf("%d%d",&a,&b); 
    
    for(i=1;i<=b;i++){    
      power=power*a;    
  }    
  printf("power of %d power %d is: %d\n",a,b,power);  
power=3*b+11 ;
 printf("Number of program steps =%d",power);  
return 0;  
}   
