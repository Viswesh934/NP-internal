#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char c1[]={'A','I','H','K','\0'};
char c2[]={'A','B','C','D','E','F','G','H','I','J','K','L'};
int doj[]={8,10,12,6};
int i,j,min,delay[5][12],res,k=0,l=0,pre[5];
for(i=0;i<4;i++)
{
for(j=0;j<12;j++)
{
printf("\nenter delay from %c to %c: ",c1[i],c2[i]);
scanf("%d",&delay[i][j]);
}
}
min=1000;
for(j=0;j<12;j++)
{
for(i=0;i<4;i++)
{
res=delay[i][j]+doj[i];
if(res<min)
{
min=res;
k=i;
}
}
delay[4][j]=min;
pre[l++]=k;
min=1000;
}
for(i=0;i<12;i++)
{
if(i==9)
delay[4][j]=0;
printf("\nDelay from j to %c is %d",c2[i],delay[4][j]);
if(i!=9)
printf("\t by the mode %c",c1[pre[i]]);
else
printf("\t by the node");
}
}
