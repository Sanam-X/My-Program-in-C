#include<stdio.h>
void main()
{
int a,b,c;
printf("\nenter the three number=\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b & a>c)
printf("the greatest number is a\n");
else if(b>a &b>c)
printf("the greatest number is b\n");
else
printf("the greatest numberis c\n");

}
