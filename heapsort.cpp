#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>& arr, int n, int i){

  int largest = i;
  int leftchild = 2*i;
  int rightchild = 2*i +1;
      if(leftchild<=n && arr[leftchild]>arr[largest]){
        largest = leftchild;
      }
      if(rightchild<=n && arr[rightchild]>arr[largest]){
        largest = rightchild;
      }
      
      if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
      }
}

void buildMaxHeap(vector<int>& arr , int n){

  for(int i=n/2;i>=1;i--){
    heapify(arr,n,i);
  }
}

vector<int> heapsort(vector<int>& arr, int n){
  buildMaxHeap(arr,n);
  int heapsize = n;
  
  while(heapsize>1){
    swap(arr[heapsize],arr[1]);
    heapsize--;
    heapify(arr,heapsize,1);
  }
  return arr;
}

int main(){
  
  vector<int> arr = {-1,3,5,1,10,2};
 int n = arr.size()-1;
  buildMaxHeap(arr,n);
   cout<<"heap : ";
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  heapsort(arr,n);
  cout<<"sorted : ";
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
}





