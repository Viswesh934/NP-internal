#include<stdio.h>
main()
{
int i,n,j,k,a[10][10],b[10][10];
printf("ENTER THE NO OF NODES");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("ENTER THE DISTANCE BETWEEN HOSTS %d,%d :",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("THE GIVEN INPUT\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]>a[i][k]+a[k][j])
{
a[i][j]=a[i][k]+a[k][j];
}
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[i][j];
if(i==j)
b[i][j]=0;
}
}
printf("OUTPUT MATRIX \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}

