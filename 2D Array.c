#include<stdio.h>
void main()
{
  int matrix[3][3], i, j,sum=0;
  printf("Enter elements of 3*3 matrix: \n”);
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d", &matrix[i][j]);
    }
  }
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    sum=sum+matrix[i][j];
  }
}
printf("Elements of the matrix are: \n”);
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("%d \t", matrix[i][j]);
  }
  printf(“\n”);
}
printf(“sum of all the elements is %d”, sum);
}

