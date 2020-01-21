#include<stdio.h>
int table(int n)
{
int a=1;
while(a<=10)
{
printf("%d*%d=%d\n",n,a,n*a);
++a;
}
}
void main()
{int x;
printf("input any number=");
scanf("%d",&x);
table(x);
}
