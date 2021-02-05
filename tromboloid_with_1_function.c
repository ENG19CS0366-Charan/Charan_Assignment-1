#include<stdio.h>
int main()
{
 float h,b,d;
 float volume_of_tromboloid;
 printf("Enter the value of h:");
 scanf("%f",&h);
 printf("Enter the value of b:");
 scanf("%f",&b);
 printf("Enter the value of d:");
 scanf("%f",&d);

 volume_of_tromboloid = (((h*b*d)+(d/b))/3);

 printf("volume of tromboloid is %f",volume_of_tromboloid);
 return 0;
} 
