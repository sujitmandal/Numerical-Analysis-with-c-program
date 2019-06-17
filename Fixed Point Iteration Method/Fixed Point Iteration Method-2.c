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
		z=(cos(u)/5+1);
		return(z);
	}
	   
/*OUTPUT:Enter the value of a a and b in which root lies:
1
2
--------------------
n    (x0)   g(x0)
--------------------
1 1.000000 1.108060
2 1.108060 1.089280
3 1.089280 1.092625
4 1.092625 1.092031
5 1.092031 1.092137
6 1.092137 1.092118
7 1.092118 1.092121
8 1.092121 1.092121
The approximate root of the given equation is 1.092 */







