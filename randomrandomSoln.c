#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pullRandomNumbrers(int numbers[], int sz, int *n, int rng);

#define MAXRAND 20 // define the max rand numbers

int main(int argc, char **argv)
{
	int randomNumbers[MAXRAND]; // Define the array for the rand. numbers
	int numRands,i;
	
	srand(time(NULL)); // Set the seed for rand()
	
	pullRandomNumbrers(randomNumbers, MAXRAND, &numRands, 12); // Call the function in which returns the MAXRAND rand numbers
                                                               // and the range of 0 to (12-1)
	
	for (i = 0; i < numRands; i++){   // print the rand numbers
		printf("%d %d\n",i,randomNumbers[i]);
	}
	return 0;
}

void pullRandomNumbrers(int numbers[], int sz, int *n, int rng){  
	int i;
	*n = rand()% (sz-1) + 1;  // define the pointer that specifies the length of the rand number
	for (i = 0; i  < *n; i++){
		numbers[i] = rand() % rng; // then generate the rand number and save them in numbers array
	}
	
}
