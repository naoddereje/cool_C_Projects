#include <stdio.h>


float AverageVal(int mst[], int n);

int main ()
{
	
    int iceThicc[8] = {72,78,87,87,94,98,101,110 };
	int iceThicc2[8] = {54,62,64,69,75,80,82,84 };
	int differences[8];
	
    float avg;   
	float avg2;
	

	avg = AverageVal(iceThicc, 8);
	avg2 = AverageVal(iceThicc2,8);
	diffArray(iceThicc, iceThicc2,differences,8);
	
	
    printf("Average Thickness is %0.2f\n", avg);
	printf("Average Thickness in 2010 was %0.2f\n", avg2);
	printf("Differences\n");
	printf("Jan\tFeb\n");
	for (int i= 0; i<4;i++){
		printf("%2d\t%2d\n", differences[i], differences[i+4]);
		
	}
}

float AverageVal(int sumValues[], int n )
{ 
	int sum=0;
	float average;
	for (int i=0; i<=n-1; i++)
		sum += sumValues[i];
		average = (float)sum/n;
	return (average);
}
void diffArray(int a1[], int a2[], int diff[], int n){
	for (int i=0; i<n; i++){
		diff[i] = a2[i] - a1[i];
	}
}





