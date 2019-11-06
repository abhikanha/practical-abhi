#include<stdio.h>  
int main()  
{  
int sum=0,digit;  
int n,temp;  
printf("Enter the number to cal. the sum of digits");   
scanf("%d",&n);  
temp=n;  
while(temp>0)  
{  
digit=temp%10;   
temp/=10;   
sum+=digit;  
}  
printf("\n Sum of digits of %d = %d \n",n,sum);  
return 0;  
}  
