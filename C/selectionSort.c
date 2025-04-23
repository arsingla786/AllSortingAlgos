#include<stdio.h>
int main() {
	int arr[5]= {1,3,3,4,5};
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
	printf("\n sortedd array : ");
	for(i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}