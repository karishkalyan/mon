#include<stdio.h>
#include<string.h>
void main()
{
char s1[25],s2[25];
printf("\n enter the strings to be compared:");
scanf("\n%s%s",s1,s2);
for(i=0;s[i]!='\0';i++)
{
if(s1[i]>s2[i])
{
printf("\n %s is greater",s1);
break;
}
else if(s1[i]<s2[i])
{
printf("\n%s is greater",s2);
break;
else
printf("\n both are equal");
break;
}
}
getch();
}
