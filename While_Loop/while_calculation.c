// BASIC Loop Concepts
//  1. Write a program to print the numbers from 1 to 10 using a while loop.

// #include <stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=10){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// 2. Print the even numbers from 2 to 20 using a while loop.

// #include <stdio.h>
// int main()
// {
//     int i=2;
//     while(i<=20){
//         if(i%2==0){
//         printf("%d\n",i);
//         }
//         i++;
//     }
//     return 0;
// }

// 3. Write a program to print the odd numbers from 1 to 20 using a while loop.

// #include <stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=20){
//         if(i%2!=0){
//         printf("%d\n",i);
//         }
//         i++;
//     }
//     return 0;
// }

// 4. Write a program to print all integers between 10 and 1 in reverse order using a while
// loop.

// #include <stdio.h>
// int main()
// {
//     int i=10;
//     while(i>=1){
//         printf("%d\n",i);

//         i--;
//     }
//     return 0;
// }

// 5. Write a program to print the numbers 1 to 100, but only print those that are divisible by 5.

// #include <stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=100){
//         if(i%5==0){
//         printf("%d\n",i);
//         }
//         i++;
//     }
//     return 0;
// }

// Sum and Average Calculations

// 6. Write a program that computes the sum of integers from 1 to N, where N is provided by
// the user.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter no.: ");
//     scanf("%d",&n);

// 	int i=1;
// 	int sum=0;
// 	while(i<=n) {

// 		printf("%d\n",i);
// 		sum = sum + i;
// 		i++;
// 	}

// 	printf("sum:%d",sum);

// 	return 0;
// }

// 7. Write a program to compute the sum of all even numbers between 1 and 100.

// #include <stdio.h>

// int main()
// {
//     int i=1;
//     int a=0;
//     while(i<=100){

//         if(i%2==0){
//         printf("%d\n",i);
//                 a=a+i;

//         }
//         i++;
//     }
//     printf("sum:%d",a);

//     return 0;
// }

// 10. Write a program that sums all the multiples of 7 between 1 and 500.

// #include <stdio.h>

// int main()
// {
//     int i=1;
//     int a=0;
//     while(i<=500){

//         if(i%7==0){
//         printf("%d\n",i);
//                 a=a+i;

//         }
//         i++;
//     }
//     printf("sum:%d",a);

//     return 0;
// }

// 12. Write a program to find the product of all odd numbers from 1 to N.
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter no.: ");
//     scanf("%d", &n);

//     int i = 1;
//     int product = 1;
//     while (i <= n)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d\n", i);
//             product = product * i;
//         }
//         i++;
//     }

//     printf("product:%d", product);

//     return 0;
// }

// 8. Write a program to compute the sum of digits of a given number.

// #include <stdio.h>
// int main() {
//     int num, digit, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         digit = num % 10;     // Get the last digit

//         sum += digit;         // Add it to sum

//         num = num / 10;       // Remove the last digit

//     }

//     printf("Sum of digits = %d\n", sum);

//     return 0;
// }

// 9. Write a program to calculate the average of N numbers entered by the user.

// #include <stdio.h>

// int main() {
//     // Ek count variable add karo
//     int num, digit, sum = 0, count = 0, avg;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Safety ke liye, agar user 0 daale
//     if (num == 0) {
//         count = 1;
//     }

//     while (num != 0) {
//         digit = num % 10;
//         sum += digit;

//         // Har baar loop chalne par count ko 1 badhao
//         count++;

//         num = num / 10;
//     }

//     printf("Sum of digits = %d\n", sum);

//     // Ab sum ko 3 se nahi, count se divide karo
//     if (count > 0) {
//         avg = sum / count;
//         printf("Avg of digits = %d\n", avg);
//     }

//     return 0;
// }

// 11. Write a program to compute the factorial of a given number using a while loop.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter no.: ");
//     scanf("%d", &n);

//     int i = 1;
//     int fact = 1;
//     while (i <= n)
//     {
//         printf("%d\n", i);
//         fact = fact * i;
//         i++;
//     }

//     printf("factorial:%d", fact);

//     return 0;
// }

// 13. Write a program to check whether a number is a prime number.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter no.: ");
//     scanf("%d", &n);

//     int i = 2;
//     int isPrime = 1; // Assume the number is prime

//     if (n <= 1) {
//         isPrime = 0; // Numbers less than or equal to 1 are not prime
//     } else {
//         while (i <= n / 2) {
//             if (n % i == 0) {
//                 isPrime = 0; // Found a divisor, so it's not prime
//                 break; // Exit the loop early
//             }
//             i++;
//         }
//     }

//     if (isPrime) {
//         printf("%d is a prime number.\n", n);
//     } else {
//         printf("%d is not a prime number.\n", n);
//     }

//     return 0;
// }

// 14. Write a program to print the first N Fibonacci numbers using a while loop.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter no.: ");
//     scanf("%d", &n);

//     int a = 0, b = 1, next;
//     int count = 0;

//     while (count < n) {
//         if (count <= 1) {
//             next = count; // First two Fibonacci numbers are 0 and 1
//         } else {
//             next = a + b; // Next Fibonacci number is the sum of the previous two
//             a = b; // Update a to the last Fibonacci number
//             b = next; // Update b to the current Fibonacci number
//         }
//         printf("%d\n", next);
//         count++;
//     }

//     return 0;
// }

// classwork

// #include <stdio.h>

// int main()
// {
// 	int n;
// 	printf("Enter no.");
// 	scanf("%d",&n);

// 	int i=2;
// 	while(i<=n) {
// 		if(n%i==0) {
// 			printf("%d  ",i);
// 			n=n/i;

// 		} else {
// 			i++;
// 		}
// 	}

// 	return 0;
// }

// #include <stdio.h>

// int main()
// {
// 	int n;
// 	printf("Enter no.");
// 	scanf("%d", &n);

// 	int m;
// 	printf("Enter no.");
// 	scanf("%d", &m);

// 	int i = 2;
// 	while (i <= n || i <= m)
// 	{
// 		if (n % i == 0 && m % i == 0)
// 		{
// 			if (i <= n)
// 			{
// 				n = n / i;
// 			}
// 			if (i <= m)
// 			{
// 				m = m / i;
// 			}
// 			printf("%d  ", i);
// 		}
// 		else
// 		{
// 			i++;
// 		}
// 	}

// 	return 0;
// }

// #include <stdio.h>
// int main(){
// 	int n,m;
// 	printf("Enter no.: ");
// 	scanf("%d",&n);
// 	printf("Enter no.: ");
// 	scanf("%d",&m);

// 	int i=2;
// while(n>1 || m>1){
// 	if(n%i==0 && m%i==0){
// 		printf("%d ",i);
// 		if(n%i==0){
// 			n=n/i;
// 		}
// 		if(m%i==0){
// 			m=m/i;
// 		}
// 	}else{
// 		i++;
// 	}
// }
// 	return 0;
// }

// prime factorization of two numbers

// #include <stdio.h>

// int main() {
//     int n, m;

//     printf("Enter first number: ");
//     scanf("%d", &n);

//     printf("Enter second number: ");
//     scanf("%d", &m);

//     printf("\n prime factors are: ");

//     int i = 2;
//     while (n > 1 || m > 1) {

//         if (n % i == 0 && m % i == 0) {
//             printf("%d ", i);
//             n = n / i;
//             m = m / i;
//         }
//         else if (n % i == 0) {
//             printf("%d ", i);
//             n = n / i;
//         }
//         else if (m % i == 0) {
//             printf("%d ", i);
//             m = m / i;
//         }
//         else {
//             i++;
//         }
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int q, m, rem, temp;
//     printf("Enter q:");
//     scanf("%d", &q);
//     printf("Enter m :");
//     scanf("%d", &m);
//     int i = 1;
//     while (i <= m)
//     {
//         if (m > q)
//         {
//             rem = m % q;
//             if (rem == 0)
//             {
//                 printf("%d", q);
//                 break;
//             }
//             temp = q;
//             q = rem;
//             m = temp;
//         }
//         else
//         {
//             rem = q % m;
//             if (rem == 0)
//             {
//                 printf("%d", m);
//                 break;
//             }
//             temp = m;
//             m = rem;
//             q = temp;
//         }
//         i++;
//     }
//     return 0;
// }



// #include <stdio.h>
// int main() {
    
// 	int n;
// 	printf("Enter n: ");
// 	scanf("%d", &n);
	
//     int k;
// 	printf("Enter k: ");
// 	scanf("%d", &k);
	
// 	int i=1;
// 	int digit;

// 	while (i<= k) {

// 		digit = n % 10;     // Get the last digit

// 		printf("%d", digit);

// 		n = n / 10;       // Remove the last digit
// 		i++;

// 	}
	
// 	printf("%d\n", n);


// 	return 0;
// }

  


#include<stdio.h>
int main(){
    int n,k,i=1,rem,ten=1;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter k : ");
    scanf("%d",&k);
   
    int digit=0,temp=n;
    while(temp>0){
        temp/=10;
        digit++;
    }
   
    while(digit-1>0){
        ten=ten*10;
        digit--;
    }
   
    while(i<=k){
        rem=n%10;
        n/=10;
        n=(rem*ten)+n;
        i++;
    }
	
    printf("Answer is : %d",n);
   
    return 0;
}




