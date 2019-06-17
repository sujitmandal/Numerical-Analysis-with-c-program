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
		z=(1/(pow(u+1,2)));
		return(z);
	}   
	
/*OUTPUT:Enter the value of a a and b in which root lies:
0
1
--------------------
n    (x0)   g(x0)
--------------------
1 0.000000 0.500000
2 0.500000 0.444444
3 0.444444 0.455056
4 0.455056 0.453088
5 0.453088 0.453455
6 0.453455 0.453387
7 0.453387 0.453400
8 0.453400 0.453397
9 0.453397 0.453398
The approximate root of the given equation is 0.453 */



