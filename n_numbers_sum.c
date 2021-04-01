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



//USING FUNCTIONS//

#include<stdio.h>
int input(int n,int a[])
{
    int s=0;
    for(int i=0;i<n;i++)
{
    printf("enter number%d\n",i+1);
    scanf("%d",&a[i]);
    s=s+a[i];
}
return s;
}
void output(int n,int sum,int a[])
{
    for(int i=0;i<n-1;i++)
{
    printf("%d+",a[i]);
}
printf("%d=%d",a[n-1],sum);
}
int main()
{
    int n,sum=0,i,a[50];
    printf("enter value of n\n");
    scanf("%d",&n);
    sum=input(n,a);
    output(n,sum,a);
    return 0;
}

