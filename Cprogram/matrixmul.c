#include<stdio.h>
void main()
{
int a,b,c,d,i,j,k,sum=0;
int mat1[10][10],mat2[10][10],mat3[10][10];
printf("enter the row and coloumn\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
for(i=0;i<a;i++)
{for(j=0;j<b;j++){
printf("enter element[%d][%d]",i,j);
scanf("%d",&mat1[i][j]);
}
}
for(i=0;i<c;i++)
{for(j=0;j<d;j++){
printf("enter element[%d][%d]",i,j);
scanf("%d",&mat2[i][j]);
}
}
for(i=0;i<2;i++)
{for(j=0;j<2;j++)


{for(k=0;k<2;k++)
{sum=sum+mat1[i][k]*mat2[k][j];
mat3[i][j]=sum;

}
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
printf("%d",mat3[i][j]);}
}
printf("\n");

}
