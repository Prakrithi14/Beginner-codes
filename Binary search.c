#include <stdio.h> 
void main()
{
  int array[10];
  int i, j, num, temp, key; 
  int low, mid, high; 
  printf("Enter the value of num:"); 
  scanf("%d", &num);
  printf("Enter the elements in ascending order \n"); 
  for (i = 0; i < num; i++)
    scanf("%d", &array[i]);
  printf("Enter the element to be searched:");
  scanf("%d", &key);
  low = 1
  do
  {
  mid = (low + high) / 2;
  if (key< array[mid])
    high = mid - 1;
  else if (key > array[mid])
    low = mid + 1;
  } while (key!= array[mid] && low <= high);
  if (key== array[mid]) 
    printf("SEARCH SUCCESSFUL ");
  else
    printf("SEARCH FAILED ");
}
