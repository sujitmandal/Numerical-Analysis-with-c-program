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
                  u=1/pow(y,2);
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
2
enter the upper limit
3
enter the number of sub-intervals
10
------------------------------------------
n                 x               f(x)
------------------------------------------
0             2.000000            0.250000
1             2.100000            0.226757
2             2.200000            0.206612
3             2.300000            0.189036
4             2.400000            0.173611
5             2.500000            0.160000
6             2.600000            0.147929
7             2.700000            0.137174
8             2.800000            0.127551
9             2.900000            0.118906
10            3.000000            0.111111
the value of the intregation is 0.166813 */






