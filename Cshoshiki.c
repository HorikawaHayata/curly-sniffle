#include<float.h>
#include<limits.h>
#include<stdio.h>

int main(void)
{
	printf("double maximum:%g\n", DBL_MAX);
	printf("double minimum:%g\n",DBL_MIN);
	printf("double precision:%d\n", DBL_DIG);
	printf("int maximum:%d\n", INT_MAX);
	printf("int minimum:%d\n", INT_MIN);
	printf("%g\n",ULONG_MAX);
	printf("%g\n",LONG_MIN);
	printf("%g\n",LONG_MAX);
	printf("%f\n",FLT_MAX);
	printf("%lf\n",FLT_MIN);
	return 0;
}