/* METHOD : TRAPEZOIDAL METHOD */
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
0
enter the upper limit
2
enter the number of sub-intervals
28
------------------------------------------
n                 x               f(x)
------------------------------------------
0              0.000000        1.000000
1              0.071429        0.994563
2              0.142857        0.977208
3              0.214286        0.947187
4              0.285714        0.905013
5              0.357143        0.852439
6              0.428571        0.792148
7              0.500000        0.727273
8              0.571429        0.660886
9              0.642857        0.595615
10             0.714286        0.533437
11             0.785714        0.475646
12             0.857143        0.422935
13             0.928571        0.375530
14             1.000000        0.333333
15             1.071429        0.296041
16             1.142857        0.263239
17             1.214286        0.234470
18             1.285714        0.209274
19             1.357143        0.187214
20             1.428571        0.167890
21             1.500000        0.150943
22             1.571429        0.136057
23             1.642857        0.122956
24             1.714286        0.111400
25             1.785714        0.101184
26             1.857143        0.092130
27             1.928571        0.084087
28             2.000000        0.076923
the value of the intregation is 1.3166932 */

















