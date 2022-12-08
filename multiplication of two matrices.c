// multiplication of 2 matrices
#include<stdio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],n,i,j,k;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements of Matrix A:\n");// taking input of martix A
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the elements of Matrix B:\n");// taking input of martix B
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
	printf("The matrix A is:\n"); // Printing the elements of A
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",&a[i][j]);
        }
		printf("\n");
    }

	printf("The matrix b is:\n"); // printing the elements of B
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",&b[i][j]);
        }
		printf("\n");
    }
    
    for(i=0;i<n;i++) // multipling A and B and storing the value in matrix C
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    printf("The product of the two matrices is: \n"); // printing martix C
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
