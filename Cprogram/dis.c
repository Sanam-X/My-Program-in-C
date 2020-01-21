#include <stdio.h>
int display()
{
    int i,sum=0;
    printf("the first 10 numbers are:\n");
	for (i=1;i<=10;i++)
	{
		sum=sum+i;
		printf("%d ",i);
	}
printf("\nthe sum of first 10 num is=%d",sum);
}void main()
{
display();
}
