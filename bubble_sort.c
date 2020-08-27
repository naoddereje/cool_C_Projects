#include <stdio.h>

// Function declarations
void swap(int a[], int idx1, int idx2);
void bubbleSort(int arr[], int n);

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	
	bubbleSort(arr, 5);
	
	for(int i = 0; i < 5; i++){
		printf("%d, ", arr[i]);
	}	
}

// Function definitions

// Swaps two elements of a 1D array
void swap(int a[], int idx1, int idx2){
	int temp = a[idx1];
	a[idx1] = a[idx2];
	a[idx2] = temp;
	
	return;
}

// Sorts the elements of a 1D array in descending order.
void bubbleSort(int arr[], int n){
	int i, j, nSwaps;
	
	for(i=0; i<n-1; i++){
		nSwaps = 0;
		for(j=n-1; j>i; j--){
			//If the first entry of a pair of adjacent numbers is smaller
			if(arr[j-1] < arr[j]){ 
                // Swap adjacent entries 
				swap(arr, j, j-1);
				nSwaps++;
			}
		}
		// Stop if array already sorted
		if(nSwaps == 0)
			break;
	}
	
	return;
}
