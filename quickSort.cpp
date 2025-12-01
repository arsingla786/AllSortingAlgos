#include<bits/stdc++.h>

using namespace std;

int pivotIndex(int low, int high,vector<int>& arr){
  
  int pivot = arr[low];
  
  int i = low;
  int j = high-1;
  while(i<j){
    do{
      i++;
    }while(arr[i]<=pivot);
    
    do{
      j--;
    }while(arr[j]>pivot);
    
    if(i<j){
      swap(arr[i],arr[j]);
    }
    
  }
  swap(arr[low],arr[j]);
  return j;
}

vector<int> quickSort(int low,int high,vector<int>& arr){
  
  if(low<high){
    int j = pivotIndex(low,high,arr);
    quickSort(low,j,arr);
    quickSort(j+1,high,arr);
  }
return arr;
  
}

int main() 
{
  vector<int> arr = {10,5,8,12,15,6,3,9,16};
  int l = 0;
  int h = arr.size();
  
  vector<int> ans = quickSort(l,h,arr);
  for(auto i:ans){
    cout<<i<<" ";
  }
}
