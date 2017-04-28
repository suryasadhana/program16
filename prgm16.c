#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=2;i<=10;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
{
break;
}
}
if(i==j)
{
printf("%d",j);
}
}
getch();
}
