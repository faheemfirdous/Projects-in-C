// factorial using functions
#include<stdio.h>
int factorial(int);
int main()
{
	printf("Enter the numnber: ");
	int n,r;
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
	int ik,fact=0;
	for(ik =0;ik<=fact;ik++)
	{
		fact *= ik;
	}
	return(fact);
}
