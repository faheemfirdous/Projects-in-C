#include<stdio.h>
int domestic(int);
int commercial(int);
int main()
{
    printf("Enter the name of the consumer:\n");
    char name[50]; int type,units; float bill;
    scanf("%s",&name);
    printf("Enter the type of the connection:\n1 for domestic.\n2 for commercial.\n");
    scanf("%d",&type);
    printf("Enter the units consumed:\n");
    scanf("%d",&units);
    if(type == 1)
    {
        printf("The bill for %s for units consumed %d is Rs",name,units);
        bill = domestic(units);

    }
    else if(type == 2)
    {
        printf("The bill for %s for units consumed %d is Rs",name,units);
        bill = commercial(units);
    }
    else
    {
        printf("Error invalid input\\\\\\\\");
    }
}
int domestic(int units)
{
    int bill;
    if(units < 100)
    {
           bill = units;
    }
    else if(units > 100 && units <200)
    {
        bill = 100 + ((units - 100) * 2.5);
    }
    else if(units >200 && units < 500)
    {
        bill = 350 + ((units - 200)*4);
    }
    else if(units > 500)
    {
        bill = 1550 + ((units - 500)*6);
    }
    printf("%d",bill);
}
int commercial(int units)
{
    int bill;
    if(units < 100)
    {
        bill = units * 2.5;
    }
    else if(units > 100 && units <200)
    {
        bill = 250 + ((units - 100) * 4);
    }
    else if(units >200 && units < 500)
    {
        bill = 650 + ((units - 200)* 6.5);
    }
    else if(units > 500)
    {
        bill = 2600 + ((units - 500)*6);
    }
    printf("%d",bill);
}
