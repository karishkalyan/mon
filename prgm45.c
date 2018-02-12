#include<stdio.h>
void main()
{
int n,digit,i,num,count=0;
printf("\n enter the number:");
scanf("%d",&n);
while(digit!=0)
{
digit=num%10;
num=num/10;
count=count++;
}
printf("\n the number of digits is %d",count);
getch();
}
