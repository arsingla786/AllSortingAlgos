//In seletion sort : we use two pointer approach,
//  compare one element with all other elements and in each iteration 
//  move the smallest element in beginning.


#include<stdio.h>
int main() {
	int arr[5]= {1,6,3,0,5};
	int n=5;
	int i,j;

	for(i=0; i< n-1 ; i++) {
		int minIndex=i; //let the minimum element is at i index

		for(j=i+1; j<n; j++) {
			if(arr[j]<arr[minIndex]) {
				//swap arr[j] and arr[minIndex];
				int temp = arr[j];
				arr[j]=arr[minIndex];
				arr[minIndex]=temp;
			}
		}
	}
	printf("\n sorted array : ");
	for(i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}

// Time Complexity:
// Best, Average, Worst: O(n²)

// Space Complexity: O(1)

