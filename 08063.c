#include <stdio.h>
#include <stdlib.h>

int F(int n)
{
	if (n == 1)
		return 0;
	return  1+ F(n / 2);
}

int main3(){
	int m = F(1024);
	printf("%d\n", m);
	system("pause");
	return 0;
}