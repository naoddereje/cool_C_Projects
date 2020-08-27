#include <stdio.h>

float poly(float);

int main(int argc, char **argv)
{
	printf("%f\n", poly(1));
	printf("%f\n",poly(2));
	return 0;
}

float poly(float x){
		return 2*x*x - 3*x + 7;
}