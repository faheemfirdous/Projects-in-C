// find sum of natural elements using recursive functions
#include<stdio.h>
int sum_nat(int);
int main()
{
	int n,result;
	printf("Enter the number: ");
	scanf("&d", &n);
	result = sum_nat(n);
	printf("The sum till %d natural number is: %d",n,result);
}
int sum_nat(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return(n + sum_nat(n-1));
	}
}
