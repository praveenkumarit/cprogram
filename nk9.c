#include<stdio.h>
#include<conio.h>
int main()
{
inta[100],k,i,j,n,s=1;
printf("enter the elements of an array:");
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the no.of.elements to be added");
scanf("%d",&k);
for(j=0;j<k;j++)
{
s=s+a[j];
}
printf("the sum value is%d",s);
return 0;
}
