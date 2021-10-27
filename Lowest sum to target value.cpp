#include <iostream>

using namespace std;

int main() {
	
	//Create both arrays
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int targetValue = 1;
	
	//The sum of the first two numbers are the assumed minimum
	int minSum[2] = { arr1[0], arr2[0] };
	
	//Size of list in bytes / size of int bytes
	int arr1Size = sizeof(arr1) / sizeof(int);
	int arr2Size = sizeof(arr2) / sizeof(int);
	
	//Iterating through each list 
	for(int i=0; i<arr1Size; ++i){
		for(int j=0; j<arr2Size; ++j){
			
			/*  We get the absolute difference between the current sum of two values one from each list to the targetValue and 
				if the two numbers form each list have a lower difference than the current assumed minimum then
				we swap them around.  */
				
			if( abs(targetValue - (arr1[i] + arr2[j])) < abs(targetValue - (minSum[0] + minSum[1]))){
				
				// Swap
				minSum[0] = arr1[i];
				minSum[1] = arr2[j];
			}
		}
	}
	
	cout << minSum[0] << " + " << minSum[1];
	
	return 0;

}
