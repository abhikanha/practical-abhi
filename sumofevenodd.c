#include<stdio.h>  
int main()  
{  
int n=1,sum1=0,sum2=0;  
while(n<=100)  
{  
if(n%2==0)  
{  
sum1=sum1+n;  
}  
else  
{  
sum2=sum2+n;  
}  
n++;  
}  
printf("Sum of even and odd numbers upto 100 is %d and %d \n", sum1, sum2);  
return 0;  
}         
