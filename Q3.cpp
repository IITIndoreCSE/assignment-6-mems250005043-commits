// Write a program that asks the user for an integer number and finds the sum of all natural numbers up to that number.




// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    std::cout<<"INPUT: ";
    int n;
    std::cin>>n;
    int i = 1;
    int sum=0;
    
    while (i <= n)
     {sum = sum + i;
         i++;
     }
     std::cout<<"Sum : "<<sum;
     

    return 0;
}


















/* Test Case 1
Input:
Number: 5
Output:
Sum: 15
Test Case 2
Input:
Number: 10
Output:
Sum: 55 */
