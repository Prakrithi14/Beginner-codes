#include <stdio.h>
main()
{
  int fib[100],i, n; 
  fib[0] = 0;
  fib[1] = 1;
  printf("enter n value: ");
  scanf(“%d”, &n);
  for(i = 2; i < n; i++)
  {
    fib[i] = fib[i-1] + fib[i-2];
  }
  printf("fibo series is ….. \n”);
  for(i = 0; i < n; i++)
  {
    printf(“%d\t", fib[i]);
  }
}
