// ackerman function
#include<stdio.h>
int ack(int,int);
int main()
{
	int m,n;
	printf("Enter the value of M and N: ");
	scanf("%d %d",&m,&n);
	printf("The ackerman function on %d %d is %d.",m,n,ack(m,n));
}
int ack(int m,int n)
{
	if(m==0)
	{
		return n+1 ;
	}
	else if(m>0 && n==0)
	{
		return ack(m-1,1);
	}
	else if(m>0 && n>0)
	{
		return ack(m-1, ack(m,n-1));
	}
}
