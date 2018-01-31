#include <stdio.h>


int main(void){
	const int x = 10;
	int y = 2;
	
	printf("x = %3.2f and y = %3.2f\n", (float)x,(float)y);
	printf("x + y = %3.2f \n",x+y);
	printf("x - y = %3.2f \n",x - y);
	printf("x * y = %3.2f\n", x * y);
	printf("x / y = %3.2f\n", (float) x/y);
	printf("y  \% \\x= %3.2f\n", (float)(y%x));
	
	
	return 0;
	
}
