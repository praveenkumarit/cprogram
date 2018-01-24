#include<stdio.h>
#define MAX SIZE 100
int main()
{
int arr[MAX SIZE];
int size;
int i,j,temp;
printf("enter the size of an array");
scanf("%d",&size);
printf("enter he elements of an array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("elements of array in ascending order:");
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
return 0;
}

