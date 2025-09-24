//In seletion sort : we use two pointer approach,
//  compare one element with all other elements and in each iteration 
//  move the smallest element in beginning.


#include<stdio.h>
int main() {
	int arr[5]= {1,6,3,0,5};
	int n=5;
	int i,j;
	int minIndex;
    for(int i=0;i<n-1;i++){
      minIndex= i ;
      for(int j=i+1;j<n;j++){
        if(arr[j]<minIndex){
          minIndex=j;
        }
      }
      
        if(arr[minIndex]!=i){
          swap(arr[minIndex],arr[i]);
        
      }
    }	
	//for each iteration find the shortest element and compare with the assumed element
	printf("\n sorted array : ");
	for(i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}

// Time Complexity:
// Best, Average, Worst: O(n²)

// Space Complexity: O(1)

