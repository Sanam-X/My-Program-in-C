#include<stdio.h>
void main()
{int a,b,c,d,i,j,k,sum=0;
int mat1[10][10],mat2[10][10],mat3[10][10];
printf("enter the rows and coloumn\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
for(i=0;i<a;i++)
{for(j=0;j<b;j++)
{printf("enter the element[%d][%d]",i,j);
scanf("%d",&mat1[i][j]);
}
}
for(i=0;i<c;i++)
{for(j=0;j<d;j++)
{printf("enter the element[%d][%d]",i,j);
scanf("%d",&mat2[i][j]);
}
}
for(i=0;i<a;i++)
{for(j=0;j<d;j++){
for(k=0;k<b;k++){
sum=sum+mat1[i][k]*mat2[k][j];}
mat3[i][j]=sum;
sum=0;

}
}
for(i=0;i<a;i++)
{for(j=0;j<d;j++)
{printf("the mul is%d\t",mat3[i][j]);
}printf("\n");

}
}
