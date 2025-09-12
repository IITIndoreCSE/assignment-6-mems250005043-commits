// Write a program in C++ to create a function called join that joins two smaller arrays and creates a larger one. The two small arrays should be passed as parameters in the function and the larger array should be returned.









// Online C++ compiler to run C++ program online
#include <iostream>
int m,n;
void join(char a1[], char a2[])
{
 int i=0,j =0;
while (i < m)   
{
    std::cout <<a1[i]<<", ";
    i++;
    
}
    while (j < n) {
        if (j == n-1 )
        {std::cout <<a2[j];}
        else 
        {std::cout <<a2[j]<<", ";}
        j++;
    }

}
int main() 
{
  
  std::cout<<"Length of Array1: ";
  std::cin>>m;
  std::cout<<"Length of Array2: ";
  std::cin>>n;
    
    char array1[m];
    char array2[n];
    std::cout<<"Array1 : ";
    std::cin>>array1;
    std::cout<<"Array2 : ";
    std::cin>>array2;
    std::cout<<" Joined Array is : [ ";
    
    join(array1, array2);
    std::cout<<" ] ";
    
    return 0;
}













/* Test Case 1
Input:
Array1: [1, 2, 3]
Array2: [4, 5]
Output:
Joined Array: [1, 2, 3, 4, 5]
Test Case 2
Input:
Array1: [10, 20]
Array2: [30, 40, 50]
Output:
Joined Array: [10, 20, 30, 40, 50] */
