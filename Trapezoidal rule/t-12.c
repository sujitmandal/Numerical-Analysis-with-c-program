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
                  u=1/pow(y,5);
                  return (u);
     }
     
/*OUTPUT: enter the lower limit
3
enter the upper limit
4
enter the number of sub-intervals
27
------------------------------------------
n                 x               f(x)
------------------------------------------
0             3.000000            0.034483
1             3.037037            0.033320
2             3.074074            0.032206
3             3.111111            0.031141
4             3.148148            0.030120
5             3.185185            0.029142
6             3.222222            0.028204
7             3.259259            0.027306
8             3.296296            0.026444
9             3.333333            0.025617
10            3.370370            0.024823
11            3.407407            0.024061
12            3.444444            0.023329
13            3.481482            0.022625
14            3.518518            0.021949
15            3.555556            0.021300
16            3.592593            0.020675
17            3.629630            0.020073
18            3.666667            0.019495
19            3.703704            0.018938
20            3.740741            0.018401
21            3.777778            0.017884
22            3.814815            0.017386
23            3.851852            0.016906
24            3.888889            0.016444
25            3.925926            0.015997
26            3.962963            0.015567
27            4.000000            0.015152
the value of the intregation is 0.02311737 */













