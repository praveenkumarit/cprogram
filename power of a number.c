#include<stdio.h>
#include<conio.h>
int main()
{
double base,exponent,result;
printf("enter a base number:");
scanf("%1f",&base);
printf("enter an exponent:");
scanf("%1f",&exponent);
result=pow(base,exponent);
printf("%.11f^%.11f=%.21f",base,exponent,result);
return 0;
}
