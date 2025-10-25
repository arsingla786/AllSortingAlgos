//pre requisite => RECURSION

/*Merge Sort is a divide-and-conquer algorithm.
It divides the array into halves, 
recursively sorts each half, 
and then merges them back together in sorted order.*/

#include <iostream> 
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int st,int mid,int end){
    vector<int> temp;
    int i=st;
    int j=mid+1;
//compare an push elements into the temp array
    while( i<=mid &&  j<=end){     
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //for remaining elements
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    //now push all these elements in arr
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx]; 
    }
}
void mergeSort(vector<int> &arr, int st,int end){
    if(st<end){
       int mid= st +(end-st)/2;
       //for left half
       mergeSort(arr,st,mid);
       //for right half
       mergeSort(arr,mid+1,end);
       //call the merge function
       merge(arr,st,mid,end);
    }
 }

int main() {
    vector<int> arr={23,12,14,56,32,20};

    mergeSort(arr,0,arr.size()-1);

for(int x : arr){
    cout<< x <<" ";
} 
return 0;

}


//TC - O(nlogN)
//SC - O(n)
