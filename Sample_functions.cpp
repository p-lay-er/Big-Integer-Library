#include <iostream>
// initialisation of library
#include "bigint.hpp"
using namespace std;
// Sample program to show execution of how various functions are performed using the library
int main()
{
    cout << "Enter first number :";
    bigint n1;
    cin >> n1;
    cout << "Enter second number :";
    bigint n2;
    cin >> n2;
    cout<<"\n";
    cout << "Maximum: " << bigint::max(n1, n2) << "\n";                                           // Maximum of two Numbers
    cout << "Minimum: " << bigint::min(n1, n2) << "\n";                                           // Minimum of two Numbers
    cout << "absolute function for n1: " << bigint::abs(n1) << " " << bigint::abs(n2) << "\n";    // Absolute value of a number
    cout << "Factorial function for n1: " << bigint::fact(n1) << " " << bigint::fact(n2) << "\n"; // Factorial of a number
    cout << "Reverse function for n1: " << bigint::reverse(n1) << "\n";                           // Reverse a number
    cout << "isPalindrome function for n1: " << (bool)bigint::isPalindrome(n1) << "\n";           // Checking if a number is palindrome
    cout << "Power: " << bigint::pow(n1, n2) << "\n";                                             // finds x to the power y.
}