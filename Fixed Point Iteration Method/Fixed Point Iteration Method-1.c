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
	printf("The approximate root of the given equation is %.3f",x0);
	getch();
}
    float g(float u)
	{
		float z;
		z=(sqrt(u+0.2));
		return(z);
 }   
 
/*OUTPUT:Enter the value of a a and b in which root lies:
1
2
--------------------
n    (x0)   g(x0)
--------------------
1 1.000000 1.095445
2 1.095445 1.138176
3 1.138176 1.156796
4 1.156796 1.164816
5 1.164816 1.168253
6 1.168253 1.169724
7 1.169724 1.170352
8 1.170352 1.170620
9 1.170620 1.170735
10 1.170735 1.170784
11 1.170784 1.170805
12 1.170805 1.170814
13 1.170814 1.170818
14 1.170818 1.170819
15 1.170819 1.170820
The approximate root of the given equation is 1.171 */


