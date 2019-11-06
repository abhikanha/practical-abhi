#include<stdio.h>  
void swap(int ,int );  
void swap(int a,int b)  
{  
int temp;  
printf("\n Value of a =%d,Value of b =%d before swap",a,b);  
temp=a;  
a=b;  
b=temp;  
printf("\n Value of a= %d,Value of b=%d, after swap",a,b);  
}  
void main()  
{  
int x,y;                                                                 
printf("\n Enter two numbers to swap");  
scanf("%d %d",&x,&y);  
swap(x,y);  
}  
