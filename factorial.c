#include<stdio.h>
long int fact(int); 
void main()
{
int n;
printf("Enter the number\n"); 
scanf("%d",&n);
long int fact(int); 
printf("\n the Factorial of %d is %ld",n,ajfact(n));
}

long int fact(int n)
{
if(n<=1) return 1;
else return(n*fact(n-1));
}
