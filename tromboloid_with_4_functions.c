#include<stdio.h>
float input(char a)
{
float n;
printf("enter the values of %c:",a);
scanf("%f",&n);
return n;
}
float volume(float h,float d,float b)
{
float volume = (((h*d*b)+(d/b))/3);
return volume;
}
void output(float v)
{
printf(" the volume of tromboliod is %f",v);
}
int main()
{
float h,d,b,v;
h=input(h);
d=input(d);
b=input(b);
v=volume(h,d,b);
output(v);
return 0;
}
