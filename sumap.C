#include<stdio.h>
int main()
{
int n,d,a,i,sum=0;
printf("enter no of terms:");
scanf("%d",&n);
printf("enter the first no:");
scanf("%d",&a);
printf("enter the difference:");
scanf("%d",&d);
for(i=0;i<n;i++)
{
sum=sum+a;
a=a+d;
}
printf("%d",sum);
return 0;
}
