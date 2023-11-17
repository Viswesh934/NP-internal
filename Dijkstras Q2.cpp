#include<stdio.h>
#include<string.h>
main()
{
int n,ds[30][30],s,d,pr[30],ln[30],st[30],pt[30],i,j,u,mn=10000;
printf("\n enter the no of nodes");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("\nenter the weight from node %d to %d ",(i+1),(j+1));
scanf("%d",&ds[i][j]);
}
st[i]=0;
ln[i]=10000;
pr[i]=-1;
}
printf("enter the source and destination nodes ");
scanf("%d %d",&s,&d);
s--; d--; u=s;
ln[u]=0;
pr[u]=-1;
st[u]=2;
do {
for(i=0;i<n;i++) {
if(ds[u][i]!=0 && st[i]!=2) {
st[i]=1;
if((ln[u]+ds[u][i])<ln[i]) {
pr[i]=u;
ln[i]=ln[u]+ds[u][i];
}
}
}
mn=10000;
for(i=0;i<n;i++)
if(st[i]==1 && ln[i]<mn )
{
mn=ln[i];
u=i;
}
}while(u!=d);
i=0;
u=d;
do {
pt[i]=u;
i++;
u=pr[u];
}while(u>=0);
pt[i]='\0';
s++;
d++;
printf("\n the shortest from %d to %d is %d",s,d,ln[d-1]);
printf("\npath is ");
for(u=i-1;u>=0;u--)
printf("\t %d ",(pt[u]+1));
}
