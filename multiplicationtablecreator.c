
// multiplication tablea

#include<stdio.h>
int main()
{
    int n,o,p,q;
    printf("Which table you want to print and upto which multiple:\n");
    scanf("%d\n%d",&n,&o);
    for(p=1;p<=o;p++)
    {
        q = n * p;
        printf("%d x %d = %d\n",n,p,q);
    }
  return 0;
}
