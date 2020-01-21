#include<stdio.h>
int circum(int r)
{
int pi=3.14,circ;
circ=2*pi*r;
return circ;

}
int main()
{int re,result;
printf("enter the radius:");
scanf("%d",&re);
result=circum(re);
printf("the circummference  %d",result);

}
