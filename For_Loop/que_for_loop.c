// Basic Loop Concepts:

// 1. Write a program to print the numbers from 1 to 10 using a for loop.

// #include <stdio.h>
// int main(){

//     for(int i=1;i<=10;i++){
//         printf("%d\n",i);
//     }

//     return 0;
// }


// 2. Print the even numbers from 2 to 20 using a for loop.

// #include <stdio.h>
// int main(){
//     for(int i=2;i<=20;i+=2){
//         printf("%d\n",i);
//     }
//     return 0;
// }


// 3. Write a program to print the odd numbers from 1 to 20 using a for loop.

// #include <stdio.h>
// int main(){
//     for(int i=1;i<=20;i+=2){
//         printf("%d\n",i);
//     }
//     return 0;
// }


// 4. Write a program to print all integers between 10 and 1 in reverse order using a for loop.

// #include <stdio.h>
// int main(){
//     for(int i=10;i>=1;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }


// 5. Write a program to print the numbers 1 to 100, but only print those that are divisible by 5.

// #include <stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%5==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }



// Sum and Average Calculations:


// 6. Write a program that computes the sum of integers from 1 to N, where N is provided by the user.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter N:");
//     scanf("%d",&n);

//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }

//     printf("Sum is:%d\n",sum);
//     return 0;
// }


// 7. Write a program to compute the sum of all even numbers between 1 and 100.

// #include <stdio.h>
// int main(){
//     int sum=0;
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }

//     printf("Sum of even numbers from 1 to 100 is:%d\n",sum);
//     return 0;
// }


// 8. Write a program to compute the sum of digits of a given number.

// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number:");
//     scanf("%d",&num);

//     int sum=0;
//     int digit;
//     for(int i=num;i>0;i=i/10){
//         digit=i%10;
//         sum+=digit;
//     }

//     printf("Sum of digits is:%d\n",sum);
//     return 0;
// }


// 9. Write a program to calculate the average of N numbers entered by the user.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter N:");
//     scanf("%d",&n);

//     int count = 0;
//     int sum=0;
//     int digit;
//     int avg;
//     for(int i=1;i<=n;i++){
//         digit = n%10;
//         sum+=digit;
//         count++;
//         n=n/10;
//     }
//     avg=sum/count;
//     printf("Average is:%d\n",avg);
//     return 0;
// }


// 10. Write a program that sums all the multiples of 7 between 1 and 500.

// #include <stdio.h>
// int main(){
//     int sum=0;
//     for(int i=1;i<=500;i++){
//         if(i%7==0){
//             sum+=i;
//         }
//     }

//     printf("Sum of multiples of 7 from 1 to 500 is:%d\n",sum);
//     return 0;
// }


// Factorials and Mathematical Problems:


// 11. Write a program to compute the factorial of a given number using a for loop.


// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);

//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial*=i;
//     }

//     printf("Factorial of %d is:%d\n",n,factorial);
//     return 0;
// }


// 12. Write a program to find the product of all odd numbers from 1 to N.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter N:");
//     scanf("%d",&n);

//     int product=1;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//             product*=i;
//         }
//     }

//     printf("Product of odd numbers is:%d\n",product);
//     return 0;
// }


// 13. Write a program to check whether a number is a prime number.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);

//     int count=0;
//     if(n<=1){
//         printf("%d is not a prime number.\n",n);
//         return 0;
//     }
//     else {
//         for(int i=1;i<=n;i++){
//             if(n%i==0){
//                 count++;
//             }
//         }
//     }

//     if(count==2){
//         printf("%d is a prime number.\n",n);
//     } else {
//         printf("%d is not a prime number.\n",n);
//     }

//     return 0;
// }


// 14. Write a program to print the first N Fibonacci numbers using a for loop.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter N:");
//     scanf("%d",&n);

//     int a=0, b=1, ans;

//     printf("Fibonacci Series: %d, %d, ", a, b);

//     for(int i=3;i<=n;i++){
//         ans=a+b;
//         printf("%d, ",ans);
//         a=b;
//         b=ans;
//     }

//     return 0;
// }


// 15. Write a program to calculate the power of a number (x^y) using a while loop.


// #include <stdio.h>
// int main(){
//     int x, y;
//     printf("Enter base (x):");
//     scanf("%d",&x);
//     printf("Enter exponent (y):");
//     scanf("%d",&y);

//     int result=1;
//     for(int i=1;i<=y;i++){
//         result*=x;
//     }

//     printf("%d to the power of %d is:%d\n",x,y,result);
//     return 0;
// }