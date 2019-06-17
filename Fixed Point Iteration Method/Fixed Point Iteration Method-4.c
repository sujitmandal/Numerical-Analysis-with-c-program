/* METHOD : Fixed Point Iteration Method */
#include<stdio.h>
#include<conio.h>
#include<math.h>

float g(float u);
int main()
{
	float a,b,x0,x1,c;
	int n=1;
    printf("Enter the value of a a and b in which root lies:\n");
	scanf("%f %f",&a,&b);
    printf("--------------------\n");
	printf("n    (x0)   g(x0)\t\n");
	printf("--------------------\n");
	x0=a;
	do
	{
		c=x0;
		x1=g(x0);
		printf("%d %f %f\n",n,x0,g(x0));
		x0=x1;
		n=n+1;
	}while(fabs(x0-c)>0.000001);
	printf("The approximate root of the given equation is %.4f",x0);
	getch();
}
    float g(float u)
	{
		float z;
		z=(1/pow((u+1),2));
		return(z);
	}
	
/*OUTPUT:1 0.000000 1.000000
2 1.000000 0.250000
3 0.250000 0.640000
4 0.640000 0.371803
5 0.371803 0.531394
6 0.531394 0.426409
7 0.426409 0.491487
8 0.491487 0.449532
9 0.449532 0.475931
10 0.475931 0.459058
11 0.459058 0.469737
12 0.469737 0.462936
13 0.462936 0.467250
14 0.467250 0.464506
15 0.464506 0.466249
16 0.466249 0.465141
17 0.465141 0.465845
18 0.465845 0.465398
19 0.465398 0.465682
20 0.465682 0.465501
21 0.465501 0.465616
22 0.465616 0.465543
23 0.465543 0.465589
24 0.465589 0.465560
25 0.465560 0.465579
26 0.465579 0.465567
27 0.465567 0.465574
28 0.465574 0.465569
29 0.465569 0.465572
30 0.465572 0.465571
31 0.465571 0.465572
32 0.465572 0.465571
The approximate root of the given equation is 0.4656 */




















