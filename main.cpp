/***************************************
*   2.2. Writing a Simple Program
*
*   ------------ Purpose ------------
*   Demonstrate Basic I/O operation by inputting a 
*   number and outputting the number just entered.
*
*   -- Limitations and Assumption --
*   Program assume that user enter an integer as a number.
*   As result, every input that are not able to store
*   in an integer, will make an error.
*
*   ----------- Algorithm -----------
*   - Declare an integer
*   - prompt user to enter a number
*   - Get number
*   - Display it out
*
***************************************/

#include <iostream>

using namespace std;

int main()
{
    // Declare an integer variable named `number`
    int number;

    // Prompt user to enter a number
    cout << "Please enter a number: ";  

    // Get `number` from user through console
    cin >> number;

    // Display nicely formatted number in console
    cout << "You entered: " << number << endl;

    // return 0 as exit success; 
    // means program finished successfully
    return 0;
}
