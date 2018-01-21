#include<stdio.h>
#include<conio.h>
void main()
{
int num,m=20,n=40;
printf("print odd numbers in a given range m to n:");
for(num=m;num<=n;num+1)
{
if(num%2==1)
printf("%d",num);
}
getch();
}
