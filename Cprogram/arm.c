#include<stdio.h>
#include<math.h>
int arm(int n)
{
    int  sum = 0, rem = 0, x = 0, temp;
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        x = pow(rem, 3);
        sum = sum + x;
        n = n / 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}
int main()
{
int a,b;
printf("enter the number");
scanf("%d",&a);
arm(a);

}
