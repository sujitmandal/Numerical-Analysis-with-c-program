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
     printf("the value of the intregation is %.6f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=pow(y,2)*exp(y);
                  return (u);
    }
    
/*OUTPUT: enter the lower limit
3
enter the upper limit
7
enter the number of sub-intervals
30
------------------------------------------
n                 x               f(x)
------------------------------------------
0              3.000000        9.887510
1              3.133333        11.212859
2              3.266667        12.632142
3              3.400000        14.146845
4              3.533333        15.758387
5              3.666667        17.468140
6              3.800000        19.277418
7              3.933333        21.187490
8              4.066667        23.199585
9              4.200000        25.314888
10             4.333333        27.534554
11             4.466667        29.859680
12             4.600000        32.291359
13             4.733334        34.830620
14             4.866667        37.478485
15             5.000000        40.235947
16             5.133333        43.103966
17             5.266667        46.083485
18             5.400000        49.175396
19             5.533334        52.380611
20             5.666667        55.699974
21             5.800000        59.134346
22             5.933333        62.684547
23             6.066667        66.351395
24             6.200000        70.135681
25             6.333333        74.038162
26             6.466667        78.059624
27             6.600000        82.200768
28             6.733334        86.462341
29             6.866667        90.845047
30             7.000000        95.349594
the value of the intregation is 266.225677 */








