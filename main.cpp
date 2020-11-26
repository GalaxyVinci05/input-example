#include <iostream>
using namespace std;
// Defining "input" as a string
string input;

// Running our main function
int main()
{
  // Printing into the console
  cout << "Input something: ";
  // Getting the input (without spaces, as it is a string)
  getline(cin, input);
  // Printing the input
  cout << "You typed: " << input << endl;
  // Exiting the process
  return 0;
}