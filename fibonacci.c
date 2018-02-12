#include<stdio.h>
void main()
{
int a=0,b=1,c,n,count;
printf("\n enter the limit:");
scanf("%d",&n);
printf("\n FIBONACCI SERIES....");
printf("\n%d",a);
printf("\n%d",b);
count=1;
while(count!=n-2)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
count++;
}
getch();
}
