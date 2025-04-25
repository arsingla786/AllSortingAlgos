/*In quick sort , we choose any element to be pivot
we  traverse through the whole array and assign the pivot its correct position 
then the array is divided into two halves (left of pivot and right of pivot)
we recursively perform same operation for both halves by selecting new pivots*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int st,int end ){
        int idx=st;
        int pvt=arr[end];
        for(int j=st;j<end;j++){
            
            if(arr[j]<=pvt){
              
                swap(arr[j],arr[idx]);    
               idx++;
            }
        }
        //now the position of pivot will be
        //one more than current idx
        
        swap(arr[idx],arr[end]);
        return idx;

}
void quickSort(vector<int> &arr, int st, int end){
    if(st<end){
       int pivIdx =  partition(arr , st ,end);
       quickSort(arr,st,pivIdx-1);//left half
       quickSort(arr,pivIdx+1,end);//right half

    }
}
int main() {
    vector<int> arr={23,45,32,12,13,7};
    quickSort(arr,0,arr.size()-1);

    for(int x:arr){
        cout<<x<<" ";
    }
}

// TC - O(nlogn)
// worst case when pivot is largest or smalles O(n^2)
// SC- O(1)
