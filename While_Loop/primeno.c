// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter no.: ");
//     scanf("%d", &n);

//     if(n <= 1) {
//         printf("No prime factors for numbers less than or equal to 1.\n");
//         return 0;
//     }
//     else{
//         int i = 1;
//         int count = 0;
//         while (i <= n)
//         {
//             if(n%i==0){
//                 count++;
//             }
//             i++;
//         }
//         if(count==2){
//             printf("%d is a prime number.\n", n);
//         } else {
//             printf("%d is not a prime number.\n", n);
//         }
        
//      }

//     return 0;
// }



// // take n from user and print all prime numbers up to n using while loop
// #include <stdio.h>
// int main() {
//     int n, i = 2, j, isPrime;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     printf("Prime numbers up to %d are: \n", n);
//     while (i <= n) {
//         isPrime = 1; // assume i is prime
//         j = 2;
//         while (j <= i / 2) {
//             if (i % j == 0) {
//                 isPrime = 0; // i is not prime
//                 break;
//             }
//             j++;
//         }
//         if (isPrime == 1 && i != 1) {
//             printf("%d ", i);
//         }

//         i++;
//     }
//     printf("\n");
//     return 0;
// }  



// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter start : ");
//     scanf("%d",&m);
//     printf("Enter end : ");
//     scanf("%d",&n);
    
//     // int i=m;
//     while(m<=n){
//         int j=2,count=0;
//         while(j<m){
//             if(m%j==0){
//                 count=1;
//                 break;
//             }
//             j++;
//         }
//         if(count==0){
//             printf("%d ",m);
//         }
//         m++;
//     }
    
//     return 0;
// }


// 'inverting position with digit's value