#include<stdio.h>
int palin(int a)
{
int b=0,c;
c=a;
while(a!=0)
{
b=b*10;
b=b+a%10;
a=a/10;
}
printf("the reversed number is=%d\n",b);
if(b==c)
    printf("it is palindrome no");
else
    printf("it is not palindrome no");

}
void main()
{int x;
printf("\nenter the number=\n");
scanf("%d",&x);
palin(x);


}
