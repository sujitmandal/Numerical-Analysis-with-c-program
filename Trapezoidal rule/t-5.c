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
     printf("the value of the intregation is %.6f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=sqrt(1-pow(y,2));
                  return (u);
      }
      
/*OUTPUT:enter the lower limit
0
enter the upper limit
1
enter the number of sub-intervals
12
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            0.000000
1             0.083333            0.090575
2             0.166667            0.196893
3             0.250000            0.321006
4             0.333333            0.465204
5             0.416667            0.632040
6             0.500000            0.824361
7             0.583333            1.045334
8             0.666667            1.298489
9             0.750000            1.587750
10            0.833333            1.917480
11            0.916667            2.292528
12            1.000000            2.718282
the value of the intregation is 1.002567 */








