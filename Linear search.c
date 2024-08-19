#include <stdio.h> 
void main()
{
  int array[10];
  int i, num, key,found = 0; 
  printf("Enter the value of num \n"); 
  scanf("%d", &num);
  printf("Enter the elements one by one \n"); 
  for (i = 0; i < num; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("Enter the element to be searched \n");
  scanf("%d", &key);	// Linear search begins 
  for (i = 0; i < num ; i++)
  {
  if (key == array[i] )
  {
    found = 1;
    break;
  }
  }
  if (found == 1)
    printf("Element is present in the array at position %d\n",i+1);
  else
    printf("Element is not present in the array\n");
}
