#include <stdio.h>

#define NROWS 10
#define NCOLS 20
#define MAXDIFF 10

int myMap[NROWS][NCOLS] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0, },
  {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,1,0,0,0,0,4,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
};

int foundMap[NROWS][NCOLS] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0, },
  {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,1,1,0,0,0,0,4,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0, },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
};

void listMapDifference(int map1[][NCOLS],  int map2 [][NCOLS], int rlist[], int clist[], int * n);

int main(int argc, char **argv)
{
	int rowList[MAXDIFF], colList[MAXDIFF]; // Define the variables for the differrences 
	int numDiff;  // Define the number of differrences 
	int i;
	
	listMapDifference(myMap, foundMap, rowList, colList, &numDiff); // Call the function which finds the locatations 
                                                                     // thet two maps are not the same 
	if (numDiff > 0){
		printf("The maps are different\n");
		printf("The differences are:\n");
		for (i = 0; i < numDiff; i++){
			printf("Row %2d Col %2d myMap %2d found Map %2d\n", rowList[i], colList[i], myMap[rowList[i]][colList[i]], foundMap[rowList[i]][colList[i]]);
		}
	} else {
		printf("No Differences\n");
	}
}

void listMapDifference(int map1[][NCOLS],  int map2 [][NCOLS], int rlist[], int clist[], int * n){
	int i,j;
	// initialize counter
	*n = 0;
	for (i = 0; i < NROWS; i++){     // search along each row
		for (j = 0; j < NCOLS; j++){ // for  all the columns in that row
			if (map1[i][j] != map2[i][j]){
				// add to the list
				rlist[*n] = i;   // save the row #
				clist[*n] = j;   // save the column #
				(*n)++;          // Update the counter
			}
		}
	}
}

