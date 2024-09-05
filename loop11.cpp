// 

#include <iostream> // Including the input/output stream header file
#include <math.h>   // Including the math library header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    double sum = 0, a; // Declaration of double variables 'sum' and 'a'
    int n, i;           // Declaration of integer variables 'n' and 'i'

    // Display a message to find the sum of the series 1 + 1/2^2 + 1/3^3 +...+ 1/n^n
    cout << "\n\n Find the sum of the series 1 + 1/2^2 + 1/3^3 +.....+ 1/n^n:\n";
    cout << "----------------------------------------------------------------\n";

    // Prompt the user to input the value for the nth term of the series
    cout << " Input the value for nth term: ";
    cin >> n; // Read the value entered by the user

    for (i = 1; i <= n; ++i) // Loop to calculate each term of the series
    {
        a = 1 / pow(i, i); // Calculate the current term: 1/(i^i)
        cout << "1/" << i << "^" << i << " = " << a << endl; // Display the current term
        sum += a; // Add the current term to the sum
    }

    // Display the total sum of the series
    cout << " The sum of the above series is: " << sum << endl;

    return 0; // Indicating successful completion of the program
}