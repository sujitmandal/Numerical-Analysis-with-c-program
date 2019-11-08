/* METHOD : Simpson's*/
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
     printf("the value of the intregation is %f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=(sqrt(y)+1);
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
0
enter the upper limit
1
enter the number of sub-intervals
10
------------------------------------------
n                 x               f(x)
------------------------------------------
0              0.000000        1.000000
1              0.100000        1.316228
2              0.200000        1.447214
3              0.300000        1.547723
4              0.400000        1.632456
5              0.500000        1.707107
6              0.600000        1.774597
7              0.700000        1.836660
8              0.800000        1.894427
9              0.900000        1.948683
10             1.000000        2.000000
the value of the intregation is 2.496150







