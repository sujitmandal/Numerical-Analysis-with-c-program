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
                  u=sqrt(pow(y,3)+2);
                  return (u);
     }
     
/*OUTPUT: enter the lower limit
0
enter the upper limit
0.786
enter the number of sub-intervals
27
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            0.000000
1             0.029111            0.000001
2             0.058222            0.000012
3             0.087333            0.000058
4             0.116444            0.000185
5             0.145556            0.000452
6             0.174667            0.000940
7             0.203778            0.001749
8             0.232889            0.002996
9             0.262000            0.004823
10            0.291111            0.007392
11            0.320222            0.010890
12            0.349333            0.015529
13            0.378444            0.021551
14            0.407556            0.029226
15            0.436667            0.038860
16            0.465778            0.050794
17            0.494889            0.065413
18            0.524000            0.083145
19            0.553111            0.104472
20            0.582222            0.129934
21            0.611333            0.160138
22            0.640444            0.195766
23            0.669556            0.237590
24            0.698667            0.286481
25            0.727778            0.343429
26            0.756889            0.409563
27            0.786000            0.486173
the value of the intregation is 0.0711613223 */












