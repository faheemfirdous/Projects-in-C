// factorial using recursive functions
#include<stdio.h>
int factorial(int);
int main()
{
	int n,r;
	printf("Enter the numnber: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Factorial does not exsit.");
	}
	else
	{
		r = factorial(n);
		printf("The factorial of the number is: %d",r);
	}
}
int factorial(int n)
{
	if(n==1)
    {
        return(1);
    }
    else
    {
        return(n * factorial(n-1));
    }
}
