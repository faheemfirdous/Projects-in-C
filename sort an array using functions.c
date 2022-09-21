// sort an array using functions
#include<stdio.h>
int sort(int array[], int);
int main()
{
	int a,b;
	int array[100];
	printf("Enter the size of the array: ");
	scanf("%d",&a);
	printf("Enter the elements:\n");
	for(b=0;b<a;b++)
	{
		scanf("%d",&array[b]);
	}
	sort(array,a);
}
int sort(int array[],int a)
{
    int i,j;
    for(int i=0;i<a;i++)
    {
        for(j=0;j<a-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d ",array[i]);
    }
}
