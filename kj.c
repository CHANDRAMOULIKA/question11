#include<stdio.h>
#include<conio.h>
void main()
{
int b,m,i=1,j;
int count=0;
scanf("%d",&b);
m=2*b;
while(i<m)
{
for(j=i+1;j<=m;j++)
{
printf("(%d,%d)\t",i,j);
count++;
}
i++;
}
printf("No of paires %d",count);
getch();
}
