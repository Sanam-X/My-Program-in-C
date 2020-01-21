#include<stdio.h>
int shift(int a)
{
int b;
b=a>>3;
printf("the shifting is=%d",b);
}
void main()
{int x;
printf("\ninput any number\n");
scanf("%d",&x);
shift(x);
}

