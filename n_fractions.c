#include<stdio.h>
struct fraction
{
    int a;
    int b;
};
typedef struct fraction Frac;

Frac input()
{
    Frac f;
    printf("Enter the numerator:- \n");
    scanf("%d",&f.a);
    printf("Enter the denominator:- \n");
    scanf("%d",&f.b);
    return f;
}

int findgcd(int num1,int num2)
{
    int div;
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        div=i;
    }
    return div;
}

Frac sum(int n,Frac arr[])
{
    int divisor;
    Frac add,simplified;
    add.a=0;
    add.b=1;
    for(int i=0;i<n;i++)
    {
        add.a=((arr[i].a)*(add.b))+((add.a)*(arr[i].b));
        add.b=((add.b)*(arr[i].b));
    }    
    divisor=findgcd(add.a,add.b);
    simplified.a=add.a/divisor;
    simplified.b=add.b/divisor;
    return simplified;
}

void input_n_fraction(int n,Frac arr[])
{
	for(int i=0;i<n;i++)
    {
	    arr[i]=input();
    }
}

void output(int n,Frac arr[],Frac result)
{
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
        {
            printf("%d/%d + ",arr[i].a,arr[i].b);
        }
        else
        {
            printf("%d/%d = %d/%d",arr[i].a,arr[i].b,result.a,result.b);
        }
    }
}

int main()
{
    int n;
    printf("Enter the no:of fractions:-");
    scanf("%d",&n);
    Frac arr[n];
    input_n_fraction(n,arr);
    Frac result=sum(n,arr);
    output(n,arr,result);
}
