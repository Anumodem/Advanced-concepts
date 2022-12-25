#include <stdio.h>
#define pi 3.14159265358979323846
#include <math.h>
int main()
{
double a,h,m;
int A,B,H,M;
scanf("%d %d %d %d",&A,&B,&H,&M);

h=(double)(H+M/60.0)/12.0*2*pi;
m=(double)M/60.0*2.0*pi;
a=sqrt(A*A+B*B-2*A*B*cos(h-m));
printf("%.10f",a);

return 0;}
