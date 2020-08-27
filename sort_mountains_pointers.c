#include <stdio.h>
#include <string.h>

#define M 10 // Number of entries
#define N 15 // Max length of each string

// Function declarations
void swap(char *arr[], int idx1, int idx2);
void selectionSortStr(char *arr[], int size);
void bubbleSort(char *arr[], int size);

int main(){
	char *mountains[M] = {"Everest", "K2", "Kanchenjunga", "Lhotse", "Makalu", 
			"Cho Oyu", "Dhaulagiri I", "Manaslu", "Nagna Parbat", "Annapurna I"};
	
	// Sort using either selection sort or bubble sort
	//	selectionSortStr(mountains, M);
	// Or
		bubbleSort(mountains, M);
	
	// Print results
	for(int i = 0; i<M; i++)
		printf("%s\n", mountains[i]);
	
	return 0;
}

// Function definitions

// Sorts an array of strings in alphabetical order
void selectionSortStr(char *arr[], int size){
	int i, j, strLast;
	
	for(i=0; i<size; i++){
		// Find the ith alphabetically 'biggest' string
		strLast = 0;
		for(j=1; j<size-i; j++){
			if(strcmp(arr[j], arr[strLast])>0)
				strLast = j;
		}
		// Place into (n-1-i)th position
		swap(arr, strLast, size-1-i);
	}
}

// Sorts an array of strings in alphabetical order
void bubbleSort(char *arr[], int size){
	int i, j, nSwaps;
	for(i=0; i<size-1; i++){
		nSwaps = 0;
		for(j=size-1; j>i; j--){
            // If the first string in a pair of adjacent stringss is alphabetically 'bigger'
			if(strcmp(arr[j-1], arr[j]) > 0){
				// Swap adjacent strings
				swap(arr, j, j-1);
				nSwaps++;
			}
		}
		// Stop if array of strings already sorted
		if(nSwaps == 0)
			break;
	}
}

// Swaps two strings in an array of strings
void swap(char *arr[], int idx1, int idx2){
	// Use strcpy to swap strings
	char *tempStr = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tempStr;
	return;	
}