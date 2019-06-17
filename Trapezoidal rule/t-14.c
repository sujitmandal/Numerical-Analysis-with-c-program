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
                  u=y/sin(y);
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
1
enter the upper limit
2
enter the number of sub-intervals
25
------------------------------------------
n                 x               f(x)
------------------------------------------
0             1.000000            1.188395
1             1.040000            1.205931
2             1.080000            1.224548
3             1.120000            1.244306
4             1.160000            1.265266
5             1.200000            1.287500
6             1.240000            1.311082
7             1.280000            1.336095
8             1.320000            1.362630
9             1.360000            1.390786
10            1.400000            1.420671
11            1.440000            1.452406
12            1.480000            1.486122
13            1.520000            1.521963
14            1.560000            1.560091
15            1.600000            1.600682
16            1.640000            1.643935
17            1.680000            1.690067
18            1.720000            1.739324
19            1.760000            1.791979
20            1.800000            1.848338
21            1.840000            1.908747
22            1.880000            1.973595
23            1.920000            2.043324
24            1.960000            2.118435
25            2.000000            2.199500
the value of the intregation is 1.56487072 */












