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
    printf("Enter the numerator:-\n");
    scanf("%d",&f.a);
    printf("Enter the denominator:-\n");
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

Frac sum(Frac frac1,Frac frac2)
{
    int divisor;
    Frac add,simplified;
    add.a=((frac1.a)*(frac2.b))+((frac2.a)*(frac1.b));
    add.b=((frac1.b)*(frac2.b));
    divisor=findgcd(add.a,add.b);
    simplified.a=add.a/divisor;
    simplified.b=add.b/divisor;
    return simplified;
}

void output(Frac frac1,Frac frac2,Frac result)
{
printf("The sum of%d/%d+%d/%d=%d/%d",frac1.a,frac1.b,frac2.a,frac2.b,result.a,result.b);
}

int main()
{
    Frac frac1,frac2,result;
    frac1=input();
    frac2=input();
    result=sum(frac1,frac2);
    output(frac1,frac2,result);
}
