#include<stdio.h>
void main()
{
int n,arr[50],asum=0,i;
float avg;
printf("\n enter the no. of digits:");
scanf("%d",&n);
printf("\n the numbers are:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
avg=sum/n;
printf("\n the avg is %f",avg);
getch();
}
