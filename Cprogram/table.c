#include<stdio.h>
void main()
{
int n,a=1;
printf("input any number=");
scanf("%d",&n);
while(a<=10)
{
printf("%d*%d=%d\n",n,a,n*a);
++a;
}
}
