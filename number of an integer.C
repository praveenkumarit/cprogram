#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("no.of digits is an integer is %d",count);
}
