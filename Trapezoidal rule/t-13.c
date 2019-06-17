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
3
enter the number of sub-intervals
24
------------------------------------------
n                 x               f(x)
------------------------------------------
0             1.000000            1.000000
1             1.083333            0.670177
2             1.166667            0.462664
3             1.250000            0.327680
4             1.333333            0.237305
5             1.416667            0.175251
6             1.500000            0.131687
7             1.583333            0.100494
8             1.666667            0.077760
9             1.750000            0.060927
10            1.833333            0.048283
11            1.916667            0.038660
12            2.000000            0.031250
13            2.083333            0.025480
14            2.166667            0.020943
15            2.250000            0.017342
16            2.333333            0.014458
17            2.416667            0.012132
18            2.500000            0.010240
19            2.583333            0.008692
20            2.666667            0.007416
21            2.750000            0.006358
22            2.833333            0.005477
23            2.916667            0.004738
24            3.000000            0.004115
the value of the intregation is 0.24978918 */













