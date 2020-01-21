#include<stdio.h>
float si(float p,float t,float r)

{
float SI;
SI=(p*t*r)/100;
return SI;
}
void main(){
float a,b,c;
float r;
printf("enter the principle,time,rate:");
scanf("%f%f%f",&a,&b,&c);
r=si(a,b,c);
printf("the simple interest is%f\n",r);
}
