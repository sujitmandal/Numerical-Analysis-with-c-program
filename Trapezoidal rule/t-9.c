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
     printf("the value of the intregation is %.10f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=pow(y,3)*tan(y);
                  return (u);
     }
     
/*OUTPUT: enter the lower limit
0
enter the upper limit
1.57
enter the number of sub-intervals
18
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            1.000000
1             0.087222            1.091019
2             0.174444            1.189533
3             0.261667            1.295233
4             0.348889            1.407555
5             0.436111            1.525646
6             0.523333            1.648342
7             0.610556            1.774152
8             0.697778            1.901259
9             0.785000            2.027544
10            0.872222            2.150628
11            0.959444            2.267942
12            1.046667            2.376812
13            1.133889            2.474565
14            1.221111            2.558652
15            1.308333            2.626767
16            1.395556            2.676967
17            1.482778            2.707779
18            1.570000            2.718281
the value of the intregation is 3.101582 */












