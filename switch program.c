#include<stdio.h>
#include<stdlib.h> 
void main( )
{
int ch,a,b,res;
float div;
printf(“Enter two numbers:\n”); 
scanf(“%d%d”,&a,&b);
printf(“1.Addition\n 2.Subtraction\n3.Multiplication\n 4.Division\n 5.Remainder\n”); 
printf(“Enter your choice:\n”); 
scanf(“%d”,&ch);
switch(ch)
{
case 1: res=a+b;
        break; 
case 2: res=a-b;
        break;
case 3: res=a*b;
        break;
case 4: div=(float)a/b; 
        break;
case 5: res=a%b;
        break;
default: printf(“Wrong choice!!\n”);
}
printf(“Result=%d\n”,res);
}

