#include<string.h>
#include<stdio.h> 
void main()
{
char c[20];
int len;
printf("Enter string whose length is to be found:");
gets(c);
len=strlen(c);
printf("\n Length of the string is %d ", len);
}
