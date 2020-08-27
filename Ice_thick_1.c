/*  program ice_thickness

    Calculates the average ice

    thickness for 2 months

*/

#include <stdio.h>


float AverageVal(int mst[], int n);
int main ()
{
	// delare and initialize the array
    int ice_mst[8] = {72,78,87,87,94,98,101,110 }; // put values here
    float   avg_mst  ;                             //declare average variable here

	
	// call the function AverageVal to calculate and return
    // the average value    

	avg_mst = AverageVal(ice_mst, 8);

	// print the value
    printf( "Avg mst: %0.2f\n", avg_mst );

}


// add parameters to be passed to the function AverageVal
float AverageVal(int mst[], int n )
{ 
	// add commands to calculate and return the average value
	int i, sum=0;
	float average;
	for (i=0; i<=n-1; i++)
		sum += mst[i];
		average = (float)sum/n;
	return (average);
}





