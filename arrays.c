// // selection sort
// #include<stdio.h>
// int main() {
// 	int arr[5]= {1,3,3,4,5};
// 	int n=5;
// 	int i,j;

// 	for(i=0; i< n-1 ; i++) {
// 		int minIndex=i; //let the minimum element is at i index

// 		for(j=i+1; j<n; j++) {
// 			if(arr[j]<arr[minIndex]) {
// 				//swap arr[j] and arr[minIndex];
// 				int temp = arr[j];
// 				arr[j]=arr[minIndex];
// 				arr[minIndex]=temp;
// 			}
// 		}
// 	}
// 	printf("\n sortedd array : ");
// 	for(i=0; i<n; i++) {
// 		printf("%d ",arr[i]);
// 	}
// }

// #include<stdio.h>
// int main(){

//     int arr[7]={1,3,7,3,4,7,8};

//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             if(arr[i]==arr[j]){
//                 printf("%d is the duplicate element ",arr[i]);
//                 break;
//             }
//         }
//     }
// }


// #include<stdio.h>
// int main(){
//     int arr[5]={18,3,3,10,11};
//     int max = -1;

//     int i;
//     for(i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
// }

//BINARY SEARCH
// #include<stdio.h>

// int main(){


//     int arr[6]={1,3,3,4,5,6};

//     int start=0;
//     int end = 5;

//     int key;
//     printf("enter key : ");

//     scanf("%d",&key);

//     int mid= (start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//         printf("index of key : %d",mid);
//         return 1;
//     }
// //move right
//         if(key>arr[mid]){
//             start=mid+1;
//         }
// //move left
//         else{
//             end = mid-1;
//         }


//         mid = (start+end)/2;

//     }

//     printf("key not found");
//     return 0;

// }

// #include<stdio.h>
// int main(){

//     int size;
//     printf("enter size of array : ");
//     scanf("%d",&size);

//     int arr[size],i;
//     for(i=0;i<size;i++){
//         printf("\nenter element %d : ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("array given : ");
//      for(i=0;i<size;i++){

//          printf("%d ",arr[i]);
//      }

//     int start=0;
//     int end=size-1;

//     int key;
//     printf("\nenter key : ");
//     scanf("%d",&key);

//     while(start<=end){
//         int mid= (start+end)/3 ;

//         if(arr[mid]==key){
//             printf("\nindex of key : %d",mid);
//           return 0;
//         }
// //move right
//         if(key>arr[mid]){
//             start = mid+1;
//         }
// //move left
//         else{
//             end=mid-1;
//         }
//     }

//     printf("key not present");
//     return 0;

// }

//..........................................................................

// //BUBBLE SORT
// #include<stdio.h>
// int main(){
//     int arr[6]={45,3,31,5,35,6};
//     int n=6;
//     int i,j,temp;
    
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }    
// }



//MULTIPLY TWO MATRICES
#include<stdio.h>
int main()
{
    int arr[3][3],brr[3][3];
    int i,j,k;
    int crr[3][3];
    
    printf("enter first matrix\n ");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\nenter second matrix\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter brr[%d][%d] : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    
    //mULTIPLICATION
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            k=0;
            crr[i][j] = (arr[i][k]*brr[k][j]) + (arr[i][k+1]*brr[k+1][j]);
        }
    }
    
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    
}







