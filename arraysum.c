#include<stdio.h>

int arr_sum(int ar[] , int);

int main()
{
  int ar[100],i,j,sum;
  printf("Enter the size of array: ");
  scanf("%d",&j);
  printf("Enter the array in linear order:\n");
  for(i=0;i<j;i++)
  {
      scanf("%d ",&ar[i]);        
  }
  printf("\nThe given array is:\n");
  for(i=0;i<j;i++)
  {
      printf("%d  ", ar[i]);
  }
  sum = arr_sum(ar,j);
  printf("The sum of array is: %d.",sum);
}
int arr_sum(int ar[],int j)
{
  int i,sum=0;
  for(i=0;i<j;i++)
  {
    sum += ar[i];
  }
  return (sum);
}
