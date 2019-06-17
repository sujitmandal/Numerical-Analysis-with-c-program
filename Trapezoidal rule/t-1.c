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
                  u=1/(y*y));
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
3
enter the upper limit
7
enter the number of sub-intervals
8
------------------------------------------
n                 x               f(x)
------------------------------------------
0             3.000000            9.887510
1             3.500000            15.346346
2             4.000000            22.180710
3             4.500000            30.457567
4             5.000000            40.235947
5             5.500000            51.568630
6             6.000000            64.503342
7             6.500000            79.083641
8             7.000000            95.349594
the value of the intregation is 177.997375 */



