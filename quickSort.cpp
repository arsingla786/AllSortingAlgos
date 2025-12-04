//if pivot is beginning element 

#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& arr, int low, int high){
  int pivot = arr[low];
  int i=low+1;
  int j = high;
  
  while(i<j){
    while(i<=high && arr[i]<pivot){
      i++;
    }
    
    while(j>=low && arr[j]>pivot){
    j--;  
    }
    
    if(i<j){
      swap(arr[j],arr[i]);
    }
    
  }
  swap(arr[low],arr[j]);
  return j;
}


vector<int> quickSort(vector<int>& arr, int low,int high){
  
  if(low<high){
    int j = pivotIndex(arr,low,high);
    quickSort(arr, low, j-1);
    quickSort(arr,j+1,high);
  }
return arr;  
}




int main(){
  vector<int> arr= {4,5,2,6,7,9,1,3};
  
  int low= 0;
  int high = arr.size()-1;
  
  vector<int> ans = quickSort(arr,low,high);
  
  
  for(auto i: ans){
    cout<<i<<" ";
  }
  
}
