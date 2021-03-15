#include<stdio.h>
int main()
{
int  n,i,num,sum;
printf("enter the no:of inputs:-");
scanf("%d",&n);
printf("enter the %d numbers:-",n);
for(i=1;i<=n;i++)
{
scanf("%d",&num);
sum=sum+num;
}
printf("sum of %d numbers are:-%d",n,sum);
return 0;
}
