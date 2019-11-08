/* METHOD : Simpson's */
#include<stdio.h>
#include<conio.h>
#include<math.h>

float f (float y);
int main()
{
    int i,n;
    float a,b,x,h,s0,s1,s2,p;
    printf("enter the lower limit\n");
    scanf("%f",&a);
    printf("enter the upper limit\n");
    scanf("%f",&b);
    printf("enter the number of sub-intervals\n");
    scanf("%d",&n);
     h=(b-a)/n;
    s0=0.0;
    s1=0.0;
    s2=0.0;
    printf("------------------------------------------\n");
    printf("n\t          x\t          f(x)\t\n");
    printf("------------------------------------------\n");
    for(i=0;i<=n;i++)
    {
                     x=a+i*h;
     printf("%d\t       %f\t       %f\t\n",i,x,f(x));
     if(i==0 || i==n)
     {
             s0=s0+f(x);
             }
     else
	 { if(i%2==0)
	   s2=s2+2*f(x);
	 else
	 { s1=s1+4*f(x);
	   }  
	   }        
       }
       p=(s0+s1+s2)*h/2;
     printf("the value of the intregation is %.7f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=1/(pow(y,3)+pow(y,2)+1);
                  return (u);
      }
      
/*OUTPUT: enter the lower limit
1
enter the upper limit
3
enter the number of sub-intervals
20
------------------------------------------
n                 x               f(x)
------------------------------------------
0              1.000000        2.718282
1              1.100000        3.635041
2              1.200000        4.780969
3              1.300000        6.201111
4              1.400000        7.948192
5              1.500000        10.083800
6              1.600000        12.679764
7              1.700000        15.819710
8              1.800000        19.600855
9              1.900000        24.136084
10             2.000000        29.556225
11             2.100000        36.012802
12             2.200000        43.681068
13             2.300000        52.763443
14             2.400000        63.493507
15             2.500000        76.140587
16             2.600000        91.014854
17             2.700000        108.473251
18             2.800000        128.926071
19             2.900000        152.844589
20             3.000000        180.769836
the value of the intregation is 146.564636 */












