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
                  u=1/(pow(y,3)+2);
                  return (u);
     }
     
/*OUTPUT: enter the lower limit
0
enter the upper limit
1
enter the number of sub-intervals
27
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            1.414214
1             0.037037            1.414232
2             0.074074            1.414357
3             0.111111            1.414698
4             0.148148            1.415363
5             0.185185            1.416457
6             0.222222            1.418088
7             0.259259            1.420361
8             0.296296            1.423381
9             0.333333            1.427248
10            0.370370            1.432063
11            0.407407            1.437923
12            0.444444            1.444919
13            0.481481            1.453141
14            0.518519            1.462672
15            0.555556            1.473590
16            0.592593            1.485967
17            0.629630            1.499869
18            0.666667            1.515354
19            0.703704            1.532473
20            0.740741            1.551271
21            0.777778            1.571785
22            0.814815            1.594043
23            0.851852            1.618069
24            0.888889            1.643877
25            0.925926            1.671476
26            0.962963            1.700868
27            1.000000            1.732051
the value of the intregation is 1.49728417 */













