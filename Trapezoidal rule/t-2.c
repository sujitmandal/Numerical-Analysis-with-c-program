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
     printf("the value of the intregation is %f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=y*tan(y);
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
0
enter the upper limit
1
enter the number of sub-intervals
11
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            0.000000
1             0.090909            0.008287
2             0.181818            0.033427
3             0.272727            0.076281
4             0.363636            0.138386
5             0.454545            0.222124
6             0.545455            0.331019
7             0.636364            0.470213
8             0.727273            0.647286
9             0.818182            0.873667
10            0.909091            1.167235
11            1.000000            1.557408
the value of the intregation is 0.431512 */




