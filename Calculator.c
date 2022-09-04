#include<stdio.h>
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
float division(int,int);
int main()
{
	int x,y,operand,add,sub,mul,div;
	printf("Welcome to calculator!!!\nEnter the numbers:\n");
	scanf("%d\n%d",&x,&y);
	printf("Enter 1 to add,\n2 to subtract\n3 to multiple\n4 to divide.");
	scanf("%d",&operand);
	switch(operand)
	{
		case 1:
			add = addition(x,y);
			printf("The addition of %d and %d is %d",x,y,add);
			break;
		case 2:
			sub = subtraction(x,y);
			printf("The difference of %d and %d is %d",x,y,sub);
			break;
		case 3:
			mul = multiplication(x,y);
			printf("The multiple of %d and %d is %d",x,y,mul);
			break;
		case 4:
			div = division(x,y);
			printf("The division of %d and %d is %d",x,y,div);
			break;			
	}
}
int addition(int a,int b)
{
	int c;
	c = a + b;
	return(c);
}
int subtraction(int a,int b)
{
	int c;
	c = a - b;
	return(c);
}
int multiplication(int a,int b)
{
	int c;
	c = a*b;
	return(c);
}
float division(int a,int b)
{
	float c;
	c = a/b;
	return(c);
}
