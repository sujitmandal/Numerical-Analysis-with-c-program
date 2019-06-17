/* METHOD : TRAPEZOIDAL METHOD */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f (float y);
int main()
{
    int i,n;
    float a,b,x,h,s0,s1,p;
    printf("enter the lower limit\n");
    scanf("%f",&a);
    printf("enter the upper limit\n");
    scanf("%f",&b);
    printf("enter the number of sub-intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    s0=0.0;
    s1=0.0;
    printf("------------------------------------------\n");
    printf("n\t          x\t          f(x)\t\n");
    printf("------------------------------------------\n");
    for(i=0;i<=n;i++)
    {
                     x=a+i*h;
     printf("%d\t      %f\t          %f\t\n",i,x,f(x));
     if(i==0 || i==n)
     {
             s0=s0+f(x);
             }
     else
     { s1=s1+2*f(x);
     }
     }
     p=(s0+s1)*h/2;
     printf("the value of the intregation is %.8f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=y*sin(y);
                  return (u);
      }
      
/*OUTPUT: enter the lower limit
0
enter the upper limit
1
enter the number of sub-intervals
20
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            1.000000
1             0.050000            0.998749
2             0.100000            0.994987
3             0.150000            0.988686
4             0.200000            0.979796
5             0.250000            0.968246
6             0.300000            0.953939
7             0.350000            0.936750
8             0.400000            0.916515
9             0.450000            0.893029
10            0.500000            0.866025
11            0.550000            0.835165
12            0.600000            0.800000
13            0.650000            0.759934
14            0.700000            0.714143
15            0.750000            0.661438
16            0.800000            0.600000
17            0.850000            0.526783
18            0.900000            0.435890
19            0.950000            0.312250
20            1.000000            0.000000
the value of the intregation is 0.782116 */











