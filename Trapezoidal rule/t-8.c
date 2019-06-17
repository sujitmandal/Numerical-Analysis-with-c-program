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
                  u=exp(sin(y));
                  return (u);
     }
     
/*OUTPUT: enter the lower limit
0
enter the upper limit
1.57
enter the number of sub-intervals
25
------------------------------------------
n                 x               f(x)
------------------------------------------
0             0.000000            0.000000
1             0.062800            0.250517
2             0.125600            0.353935
3             0.188400            0.432767
4             0.251200            0.498564
5             0.314000            0.555757
6             0.376800            0.606586
7             0.439600            0.652363
8             0.502400            0.693924
9             0.565200            0.731837
10            0.628000            0.766503
11            0.690800            0.798219
12            0.753600            0.827205
13            0.816400            0.853631
14            0.879200            0.877627
15            0.942000            0.899298
16            1.004800            0.918725
17            1.067600            0.935973
18            1.130400            0.951096
19            1.193200            0.964134
20            1.256000            0.975120
21            1.318800            0.984082
22            1.381600            0.991038
23            1.444400            0.996003
24            1.507200            0.998989
25            1.570000            1.000000
the value of the intregation is 1.19407248 */













