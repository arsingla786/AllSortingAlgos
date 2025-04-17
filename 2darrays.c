
// #include <stdio.h>

// int main()
// {
//       int arr[2][3];
//       int i,j;
//       for(i=0;i<2;i++){
//           for(j=0;j<3;j++){
//               printf("enter arr[%d][%d] : ",i,j);
//               scanf("%d",&arr[i][j]);
//               }
//       }
//       for(i=0;i<2;i++){
//           for(j=0;j<3;j++){
//               printf("%d ",arr[i][j]);
//           }
//           printf("\n");
//       }
      
// }

// #include <stdio.h>

// int main() {
//     int arr[4][2]; 
//     int i;

//     // Input section
//     for(i = 0; i < 4; i++) {
//         printf("Enter roll number of student %d: ", i + 1);
//         scanf("%d", &arr[i][0]);

//         printf("Enter marks of student %d: ", i + 1);
//         scanf("%d", &arr[i][1]);
//     }

//     // Output section
//     printf("\nStored Data:\n");
//     printf("Roll No\tMarks\n");
//     for(i = 0; i < 4; i++) {
//         printf("%d\t%d\n", arr[i][0], arr[i][1]);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[2][2] = {1,2,3,4};
//     int brr[2][2] = {5,6,7,8};
//     int i,j,k;
//     int crr[2][2];
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             crr[i][j]=arr[i][j]+brr[i][j];
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//         printf("%d ",crr[i][j]);
//     }
//     printf("\n");
//     }  
// }

// #include<stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j,sum=0;
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter arr[%d][%d] : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
        
//     }
//     printf("%d",sum);
// }

//max element in an array
// #include<stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j,sum=0;
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter arr[%d][%d] : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// int max = -1 ;
//  for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(max<arr[i][j]){
//                 max=arr[i][j];
//             }
//         }
        
//     }
//     printf("maximum value in array = %d",max);
//     printf("\n");
//     int min = 1000 ;
//  for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(min>arr[i][j]){
//                 min=arr[i][j];
//             }
//             else ;
//         }
        
//     }
//     printf("minimum value in array = %d",min);
// }
// #include<stdio.h>
// int main()
// {
//      int arr[4][5];
//      int i,j;
//      for(i=0;i<5;i++){
//          for(j=0;j<5;j++){
//              printf("enter element :  ");
//              scanf("%d",&arr[i][j]);
//          }
//      }
//      for(i=0;i<5;i++){
//          for(j=0;j<5;j++){
//              printf("%d ",arr[i][j]);
//          }
//          printf("\n");
//      }
//      int sum=0;
//      for(i=0;i<3;i++){
//          for(j=1;j<4;j++){
//              sum=sum+arr[i][j];
//          }
//      }
//      printf("\n\n");
//      printf("%d",sum);
     
// }

// #include<stdio.h>
// int main(){
//     int arr[3][3];
//     int i,j;
//      for(i=0;i<3;i++){
//          for(j=0;j<3;j++){
//              printf("enter element :  ");
//              scanf("%d",&arr[i][j]);
//          }
//      }
//      int Maxsum=0;int Maxrow=0;
//     for(i=0;i<3;i++){
//         int sum=0;
//         for(j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//         if(sum>Maxsum){
//             Maxsum=sum;
//             Maxrow=i;
//         }
//     }
//      printf("max sum= %d , max row=%d",Maxsum,Maxrow);
     
// }

// #include<stdio.h>
// int main()
// {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int i,j;
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }
    
// }
//_______________________________________________________________________
//_______________________________________________________________________
// #include<stdio.h>
// int main(){
//      int arr[3][3];
//     int i,j;
//      for(i=0;i<3;i++){
//          for(j=0;j<3;j++){
//              printf("enter element :  ");
//              scanf("%d",&arr[i][j]);
//          }
//      }
//       for(i=0;i<3;i++){
//          for(j=0;j<3;j++){
//              printf("%d ",arr[i][j]);
//          }
//          printf("\n");
//      }
//      printf("\n");
//      int count=0,maxCount=0,maxRow=0;
//      for(i=0;i<3;i++){
//          count=0;
//          for(j=0;j<3;j++){
//              if(arr[i][j]==1){
//                  count++;
//              }
//          }
//          if(maxCount<count){
//              maxCount=count;
//              maxRow=i;
//          }
//      }
     
//      printf("row with maximum ones : %d ",maxRow);
     
// }

//MULTIPLY TWO MATRICES
// #include<stdio.h>
// int main()
// {
//     int arr[2][2],brr[2][2];
//     int i,j,k;
//     int crr[2][2];
    
//     printf("enter first matrix\n ");
    
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("enter arr[%d][%d] : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
    
//     printf("\nenter second matrix\n ");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("enter brr[%d][%d] : ",i,j);
//             scanf("%d",&brr[i][j]);
//         }
//     }
    
//     //mULTIPLICATION
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             k=0;
//             crr[i][j] = (arr[i][k]*brr[k][j]) + (arr[i][k+1]*brr[k+1][j]) ;
//         }
//     }
    
//      for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//           printf("%d ",crr[i][j]);
//         }
//         printf("\n");
//     }
    
// }


// #include<stdio.h>
// int main()
// {
//     int arr[3][3],brr[3][3];
//     int i,j,k;
//     int crr[3][3];
    
//     printf("enter first matrix\n ");
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter arr[%d][%d] : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
    
//     printf("\nenter second matrix\n ");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter brr[%d][%d] : ",i,j);
//             scanf("%d",&brr[i][j]);
//         }
//     }
    
//     //mULTIPLICATION
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             k=0;
//             crr[i][j] = (arr[i][k]*brr[k][j]) + (arr[i][k+1]*brr[k+1][j]) + (arr[i][k+2]*brr[k+2][j]);
//         }
//     }
    
//      for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//           printf("%d ",crr[i][j]);
//         }
//         printf("\n");
//     }
    
// }
// #include<stdio.h>
// int main()
// {
//     int arr[3][2],brr[2][3];
//     int i,j,k;
//     int crr[3][3];
    
//     printf("enter first matrix\n ");
    
//     for(i=0;i<3;i++){
//         for(j=0;j<2;j++){
//             printf("enter arr[%d][%d] : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
    
//     printf("\nenter second matrix\n ");
//     for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             printf("enter brr[%d][%d] : ",i,j);
//             scanf("%d",&brr[i][j]);
//         }
//     }
//      for(i=0;i<3;i++){
//         for(j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
           
//         }
//         printf("\n");
//     }
  
//       for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",brr[i][j]);
           
//         }
//         printf("\n");
//     }
    
//     //mULTIPLICATION
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             k=0;
//             crr[i][j] = (arr[i][k]*brr[k][j]) + (arr[i][k+1]*brr[k+1][j]) ;
//         }
//     }
   
     
//      for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//           printf("%d ",crr[i][j]);
//         }
//         printf("\n");
//     }
// }