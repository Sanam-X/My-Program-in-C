#include<stdio.h>
void main()
{int i,j,mat[2][3],trans[10][10];
for(i=0;i<2;i++){
for(j=0;j<3;j++){
printf("the element [%d][%d]",i,j);
scanf("%d",&mat[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<2;j++)
    trans[j][i]=mat[j][i];
}
for(i=0;i<3;i++){
for(j=0;j<2;j++){printf("%d\t",trans[j][i]);
}
printf("\n");
}
}
