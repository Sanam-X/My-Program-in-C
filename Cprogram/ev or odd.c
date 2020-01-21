#include<stdio.h>
int eo(int a)
{
if(a%2==0)
printf("it is even number\n");
else
printf("it is odd number\n");
}
int main()
{int x;
printf("enter the number\n");
scanf("%d",&x);
eo(x);
}
