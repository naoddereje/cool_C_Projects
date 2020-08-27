#include <stdio.h>

void waveDraw(int ar[], int size);
int main(int argc, char **argv)
{
	FILE * infile;
	int count;
	int array[100];
	
	infile = fopen("../sawtooth.txt","r");
	count = 0;
	while(!feof(infile)){
		fscanf(infile,"%d",&array[count]);
		count ++;
	}
	
	waveDraw(array,count);
	
	return 0;
}

void waveDraw(int ar[], int size){
	for(int i=0; i<size; i++){
		if(ar[i]>0) for(int j=0; j<ar[i]; j++)
			printf(".");
		printf("\n");
	}
}
