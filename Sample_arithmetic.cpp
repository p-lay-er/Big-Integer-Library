#include <iostream>
// initialisation of library
#include "bigint.hpp"
using namespace std;
// Sample program to show execution of how arithmetc operations are performed using the library
int main()
{
    cout << "Enter first number :";
    bigint n1;
    cin >> n1;
    cout << "Enter second number :";
    bigint n2;
    cin >> n2;
    bigint n3; // variable to store the value after applying operations on n1 & n2
    n3 = n1 + n2;
    cout << n3 << "\n";

    cout << "Addition: " << n1 + n2 << "\n";       // Addition
    cout << "Subtraction: " << n2 - n1 << "\n";    // subtraction
    cout << "Multiplication: " << n1 * n2 << "\n"; // Multiplication
    cout << "Division: " << n3 / n2 << "\n";       // Division

    cout << "n2 + 3: " << n2 + 3 << "\n";
    cout << "n2 - 3: " << n2 - 3 << "\n";
    cout << "n2 * 3: " << n2 * 3 << "\n";
    cout << "n2 / 3: " << n2 / 3 << "\n";

    cout << "3 + n2: " << 3 + n2 << "\n";
    cout << "3 - n2: " << 3 - n2 << "\n";
    cout << "3 * n2: " << 3 * n2 << "\n";
    cout << "3 / n2: " << 3 / n2 << "\n";

    // unary operations
    cout << "PreIncrement: " << ++n2 << "\n";
    cout << "PreDecrement: " << --n2 << "\n";
    cout << "PostIncrement: " << n2++ << "\n";
    cout << "PostDecrement: " << n2-- << "\n";

    // equality check
    cout << "Check n3 != n3: " << (bool)(n3 != n3) << "\n"; // Checking if value of both are different
    cout << "Check n3 == n3: " << (bool)(n3 == n3) << "\n"; // Checking if value of both are same

    n3 += n2;
    cout << "n3 += n2: " << n3 << "\n";

    n3 -= n2;
    cout << "n3 -= n2: " << n3 << "\n";

    n3 *= n2;
    cout << "n3 *= n2: " << n3 << "\n";

    n3 /= n2;
    cout << "n3 /= n2: " << n3 << "\n";
}