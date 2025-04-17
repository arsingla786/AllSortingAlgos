// #include <stdio.h>

// int main()
// {
//     int number;
//     printf("enter the number : ");
//     scanf("%d",&number );
    
//     int i;
//     int flag=0;
   
//     for(i=2;i<number;i++){
//         if(number%i==0){
//             flag=1;
//         }
        
//     }
//     if(number==0 || number ==1 ){
//         printf("Niether prime nor composite ");
//     }
    
//      else if(flag==0){
//         printf("Prime");
//     }
     
//     else{
//         printf("Not prime");
//     }
    
// }
//programme to print all prime numbers between 1 and 100


// #include<stdio.h>
// int main(){
//     int i,j;
//     int flag=0;
    
//     for(i=2;i<=100;i++){
//         for(j=2;j<=100;j++){
//             if(j%i==0){
//                 flag=0;
//             }
//         }
    
//     }
    
//     for(i=1;i<=100;i++){
//         if(flag==1){
//             printf("%d ",i);
//         }
//     }
    
    
// }

// #include <stdio.h>

// int main() {
//     int i, j, flag=0;

//     printf("Prime numbers from 1 to 100:\n");
    
//     for (i = 2; i <= 100; i++) { // Start from 2 (since 1 is not prime)
//          flag = 1; // Assume i is prime

//         for (j = 2; j <= i/2; j++) { // Only check up to sqrt(i)
//             if (i % j == 0) {
//                 flag = 0; // Not prime
//                 break;    // Exit early for efficiency
//             }
//         }

//         if (flag == 1) { // If still prime, print it
//             printf("%d ", i);
//         }
//     }
//                   return 0;
// }
// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d ",i);
        
//         i++;
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int i;
//     int fact=1;
    
//     int n;
//     printf("enter n - ");
//     scanf("%d",&n);
    
//     for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
    
//     printf("%d!=%d",n,fact);
    
// }
//days to YY:MM:DD
// #include<stdio.h>
// int main(){
    
//     int days;
//     printf("Enter days : ");
//     scanf("%d",&days);
    
//     int year,month;
    
//     year=days/365;
//     printf("\nno. of years = %d",year);
//     days= days%365;
    
//     month=days/30;
//     printf("\nno. of months = %d",month);
//     days=days%30;
    
//     printf("\nno. of days = %d",days);
// }

// #include<stdio.h>

// int main(){
//     int x=4,y=0;
    
//     ++x;
//     --y;
//     printf("%d %d",x,y);
    
    
    
// }

//Seconds to hour,minutes,seconds 

// #include<stdio.h>
// int main(){
//     int seconds,hours,minutes;
//     printf("Enter seconds: ");
//     scanf("%d",&seconds);
    
//     hours=seconds/3600;
    
//     printf("\nHours   : %d ",hours);
//     seconds=seconds%3600;
    
//     minutes=seconds/60;
//     printf("\nMinutes : %d",minutes);
//     seconds=seconds%60;
    
//     printf("\nSeconds : %d",seconds);
    
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x1=25,y1=15,x2=35,y2=10;
    
//     printf("distance = %f ", sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
// }


// #include<stdio.h>
// int main(){
//     int p,q,r,s;
    
//     scanf("%d%d%d%d",&p,&q,&r,&s);
    
//  if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0)){
       
//         printf("corrct values");
//     }
//     else{
//         printf("wrong values");
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
    
//     scanf("%d%d%d",&a,&b,&c);
    
    
    
//     if((a+b>c) && (b+c>a) &&(a+c>b)){
        
//         printf("Valid tiangle\nPerimeter = %d ",a+b+c);
//     }
// else {
//     printf("not valid");
// }    
// }

// #include<stdio.h>
// int main(){
//     int arr[5];
    
//     int i,j,positive=0,negative=0;
    
//     for(i=1;i<=5;i++){
//         printf("enter number %d ",i);
//         scanf("%d",&arr[i]);
    
    
//     if(arr[i] >0){
//         positive++;
//     }
    
//     else{
//         negative++;
//     }
    
//     }
//     printf("positive = %d",positive);
//     printf("\nneagtive = %d",negative);
    
    
// }

// #include<stdio.h>
// int main(){
    
//     int n;
//     scanf("%d",&n);
    
//     
//     int count=0;
    
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     printf("digits = %d ",count);
    
// }
//....................................................
// #include <stdio.h>

// int main() {
//     int n, temp;
//     scanf("%d", &n);
    
//     int rem, count = 0, sum = 0;
//     temp = n;  // Store original number to count digits
    
//     while (temp != 0) {
//         temp = temp / 10;
//         count++;
//     }

//     int position = count;  // Start from the leftmost digit

//     while (n != 0) {
//         rem = n % 10;
        
//         if (position % 2 == 0) {
//             sum += rem;
//         }
        
//         n = n / 10;
//         position--;  // Move to the next position
//     }
    
//     printf("%d", sum);
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int rem, count = 0, sum = 0;

//     while (n != 0) {
//         rem = n % 10;
        
//         if (count % 2 == 0) {
//             sum += rem;
//         }
        
//         n = n / 10;
//         count++;  // Move to the next position
//     }
    
//     printf("%d", sum);
// }

// #include<stdio.h>
// int main(){
//     int n,temp;
//     scanf("%d",&n);
//     temp=n;
//     int reverse=0;
    
//     while(n!=0){
//          reverse=reverse*10;
//         reverse=  reverse + (n%10);
        
//          n=n/10;
//     }
    
//     printf("reverse = %d ", reverse);
//     printf("\n%d + %d = %d",temp,reverse,temp+reverse);
    
// }
//1-2+3-4+5-6......
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
    
//     int i,sum=0;
//     for(i=1;i<=n;i++){
//         if(i%2 !=0){
//             sum=sum+i;
//         }
        
//         if(i%2==0){
//             sum=sum-i;
//         }
//     }
//     printf("%d",sum);
    
    
// }
//2ND METHOD
//n=6 -> (1-2)+(3-4)+(5-6)= -1 -1 -1 = {-n/2} = -3
//n=7 -> (1-2)+(3-4)+(5-6)+7= -1 -1 -1 +7 = {-n/2 + n} = 4
// #include<stdio.h>
// int main(){
//     int n;
//      scanf("%d",&n);
     
//      int i,sum;
//      for(i=1;i<=n;i++){
//          if(n%2==0){
//               sum =  -1*(n/2); 
//          }
         
//          else{
//              sum=  -1*(n/2) + n;
//          }
//      }
     
//      printf("%d",sum);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
    
//     int i,fact=1;
    
//     for(i=1;i<=n;i++){
//         fact=fact*i;
//         printf("%d!=%d\n",i,fact);
//     }
// }

//FIBONACCI
// #include<stdio.h>

// int main(){
    
//     int a=0,b=1;
    
//     int n;
//     scanf("%d",&n);
//     int i,sum=0;
//     printf("%d %d ",a,b);
//     for(i=1;i<=n-2;i++){
        
//         sum=a+b;
//         a=b;
//         b=sum;
        
//         printf("%d ",sum);
//     }
    
// }

// #include<stdio.h>
// int main()
// {
    
//   int a,b,i=1;
   
//   int prod=1;
   
//   scanf("%d%d",&a,&b);
   
//   while(i<=b){
//       prod=prod*a;
//       i++;
//       printf("%d ",prod);
//   }
   
  
// }

// #include<stdio.h>
// int main (){
//     int i;
//     for(i=65;i<=90;i++)
//     {
//         printf("%d -> %c\n",i,(char)i);
//     }
// }
// #include<stdio.h>
// int main(){
    
//     int n;
//     scanf("%d",&n);
    
   
//     int count=0;
    
//     while(n!=0){
//         n=n/10;
//         count++;
        
//     }
    
//     printf("digits=%d",count);
// }