//  Write a program in C++ with a function called add to add two complex numbers and another function called subtract to subtract one complex number from another. 


// Online C++ compiler to run C++ program online
#include <iostream>
void add (char arr1[6], char arr2[6]){
    int realascii1 = arr1[0];
    int realascii2 = arr2[0];
    int imagascii1 = arr1[2];
    int imagascii2 = arr2[2];
    
    int real1 = realascii1 - '0';
    int real2 = realascii2 - '0';
    int imag1 = imagascii1 - '0';
    int imag2 = imagascii2 - '0';
    int realsum = real1 + real2;
    int imagsum = imag1 + imag2;
    std::cout <<"Sum: "<<realsum<<" + "<<imagsum<<"i";

}
void subtract (char arr1[6], char arr2[6]){
int realascii1 = arr1[0];
    int realascii2 = arr2[0];
    int imagascii1 = arr1[2];
    int imagascii2 = arr2[2];
    
    int real1 = realascii1 - '0';
    int real2 = realascii2 - '0';
    int imag1 = imagascii1 - '0';
    int imag2 = imagascii2 - '0';
    int realdiff = real1 - real2;
    int imagdiff = imag1 - imag2;
    std::cout <<"Difference: "<<realdiff<<" + "<<imagdiff<<"i";
}

int main() {
    // Write C++ code here
    char complex1[6];
    char complex2[6];
    std::cout<<"Complex Number 1: ";
     std::cin>>complex1;
      std::cout<<"Complex Number 2: ";
     std::cin>>complex2;
    add (complex1, complex2);
    std::cout<<std::endl;
    subtract (complex1, complex2);
    
    

    return 0;
}
















/* Test Case 1
Input:
Complex Number 1: 3 + 2i
Complex Number 2: 1 + 4i
Output:
Sum: 4 + 6i
Difference: 2 – 2i
Test Case 2
Input:
Complex Number 1: 5 + 7i
Complex Number 2: 2 + 3i
Output:
Sum: 7 + 10i
Difference: 3 + 4i */

