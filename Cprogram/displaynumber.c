#include <stdio.h>
void main()
{
    int i,sum=0;
	printf("The first 10  numbers are:\n");
	for (i=1;i<=10;i++)
	{
		sum=sum+i;
		printf("%d ",i);
	}
printf("\nthe sum of first 10 num is=%d",sum);
}
