#include <stdio.h>
int f(int a, int b);
	int f(int a, int b)
	{
	printf("a=%d , b=%d \n", a,b);
	return 0;
	}
void g();
int n=1;

int main()
{
	f(1,2);
	g();
	return 0; 
}


