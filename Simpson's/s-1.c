/* METHOD : TRAPEZOIDAL METHOD */
#include<stdio.h>
#include<conio.h>
#include<math.h>

float f (float y);
int main()
{
    int i,n;
    float a,b,x,h,s0,s1,s2,p;
    printf("enter the lower limit:");
    scanf("%f",&a);
    printf("\nenter the upper limit: ");
    scanf("%f",&b);
    printf("\nenter the number of sub-intervals: ");
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
                  u=sqrt(cos(y));
                  return (u);
    }
    
 /*OUTPUT:enter the lower limit
1
enter the upper limit
3
enter the number of sub-intervals
8
------------------------------------------
n                 x               f(x)
------------------------------------------
0              1.000000        1.000000
1              1.250000        0.800000
2              1.500000        0.666667
3              1.750000        0.571429
4              2.000000        0.500000
5              2.250000        0.444444
6              2.500000        0.400000
7              2.750000        0.363636
8              3.000000        0.333333
the value of the intregation is 1.648088 */








