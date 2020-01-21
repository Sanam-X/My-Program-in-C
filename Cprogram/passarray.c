#include<stdio.h>
int arr(int a[2][2],int b[2][2])
{
int i,j,c[2][2];

for(i=0;i<2;i++)
{for(j=0;j<2;j++)
    {
        printf("enter the element[%d][%d]",i,j);
 scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
    {
        printf("enter the element[%d][%d]",i,j);
 scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
    {
 c[i][j]=a[i][j]+b[i][j];
 printf("%d\t",c[i][j]);

}
printf("\n");
}
}




void main()
{int x[3][3],y[3][3];
arr(x,y);
}
