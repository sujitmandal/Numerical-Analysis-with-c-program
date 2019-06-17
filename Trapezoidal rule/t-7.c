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
                  u=sqrt(sin(y));
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
0
enter the upper limit
3.14
enter the number of sub-intervals
20
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            0.000000
1             0.157000            0.024548
2             0.314000            0.096984
3             0.471000            0.213729
4             0.628000            0.368967
5             0.785000            0.554858
6             0.942000            0.761829
7             1.099000            0.978938
8             1.256000            1.194280
9             1.413000            1.395445
10            1.570000            1.570000
11            1.727000            1.705974
12            1.884000            1.792346
13            2.041000            1.819503
14            2.198000            1.779659
15            2.355000            1.667224
16            2.512000            1.479105
17            2.669000            1.214919
18            2.826000            0.877133
19            2.983000            0.471101
20            3.140000            0.005001
the value of the intregation is 3.13513947 */














