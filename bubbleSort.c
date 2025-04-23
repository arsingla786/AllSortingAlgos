/*Bubble Sort is a basic sorting algorithm that repeatedly steps through the list,
 compares adjacent elements, and swaps them if they are in the wrong order. 
It "bubbles up" the largest element to the end in each pass*/



#include<stdio.h>
int main(){
    int arr[6]={45,3,31,5,35,6};
    int n=6;
    int i,j,temp;
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }    
}