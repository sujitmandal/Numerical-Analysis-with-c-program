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
	printf("The approximate root of the given equation is %.5f",x0);
	getch();
}
    float g(float u)
	{
		float z;
		z=(sqrt(sin(u)*sin(u)+1));
		return(z);
	} 
	
/*OUTPUT:Enter the value of a a and b in which root lies:
1
2
--------------------
n    (x0)   g(x0)
--------------------
1 1.000000 1.306933
2 1.306933 1.389956
3 1.389956 1.402730
4 1.402730 1.404286
5 1.404286 1.404468
6 1.404468 1.404489
7 1.404489 1.404491
8 1.404491 1.404492
The approximate root of the given equation is 1.40449 */




















