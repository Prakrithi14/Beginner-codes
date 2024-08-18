#include<stdio.h> 
void main()
{
  int a[100], n, i, j, temp;
  printf("Enter number of elements to be sorted\n"); 
  scanf("%d", &n);
  printf("Enter the %d integer elements \n", n);   
  for (i = 0; i < n; i++)
  {
  scanf("%d", &a[i]);
  }
  //sorting
  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (a[j] > a[j+1])
      {
        temp	= a[j]; 
        a[j]	= a[j+1];
        a[j+1] = temp;
      }
    }
  }
  printf("\n Sorted list in ascending order:\n"); 
  for ( i = 0 ; i < n ; i++ )
  {
    printf("%d\t", a[i]);
  }
}
