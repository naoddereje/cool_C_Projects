#include <stdio.h>

void waveDraw(int ar[], int size);
int main(int argc, char **argv)
{
	
	int test1[20] = { 1,2,3,4,5,4,3,2,1,5,6,7,8,7,6,5,4,3,2,1};
	waveDraw(test1,20);
	
	return 0;
}

void waveDraw(int ar[], int size){
	for(int i=0; i<size; i++){
		if(ar[i]>0) for(int j=0; j<ar[i]; j++)
			printf(".");
		printf("\n");
	}
}
