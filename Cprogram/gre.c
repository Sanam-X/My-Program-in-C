#include<stdio.h>
int greatest(int a,int b,int c)
{

if(a>b & a>c)
printf("the greatest number is a\n");
else if(b>a &b>c)
printf("the greatest number is b\n");
else
printf("the greatest numberis c\n");

}
int main()
{int x,y,z;
printf("\nenter the three number=\n");
scanf("%d%d%d",&x,&y,&z);
greatest(x,y,z);
}
