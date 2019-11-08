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
     printf("the value of the intregation is %.6f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=1/(1+y);
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
0
enter the upper limit
1
enter the number of sub-intervals
20
------------------------------------------
n                 x               f(x)
------------------------------------------
0              0.000000        1.000000
1              0.050000        0.952381
2              0.100000        0.909091
3              0.150000        0.869565
4              0.200000        0.833333
5              0.250000        0.800000
6              0.300000        0.769231
7              0.350000        0.740741
8              0.400000        0.714286
9              0.450000        0.689655
10             0.500000        0.666667
11             0.550000        0.645161
12             0.600000        0.625000
13             0.650000        0.606061
14             0.700000        0.588235
15             0.750000        0.571429
16             0.800000        0.555556
17             0.850000        0.540541
18             0.900000        0.526316
19             0.950000        0.512820
20             1.000000        0.500000
the value of the intregation is 1.039721








