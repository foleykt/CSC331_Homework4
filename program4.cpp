/*
 * Author: Kyle Foley
 * Professor: Dr. Cook
 * Course: CSC 331
 * 
 * Program 4 "Looping for the Doctor"
 * *****************************************************************************
 * Program 4 will prompt the user for two integer inputs and return the 
 * greatest common denominator between the two numbers.
 * ****************************************************************************/

#include <iostream>
using namespace std;

class program4
{
public: // publicly accessible methods
    
    int calcGCD (int a, int b); // Method that will calculate GCD
};//end class program4

// calcGCD will calculate the greatest common denominator between the two
// input integers
int calcGCD (int a, int b)
{
    // algorithm for finding GCD
    while (a != b){
        if (a > b){
            a = a - b;
        }// end if
        else{
            b = b - a;
        }// end else
    }// end while
}// end method calcGCD

int main(int argc, char** argv){
    int a;
    int b;
    // variables to store input values to pass into calcGCD method
    
    // Prompting user for input
    cout << "Please enter the first exit number: ";
    // store input value in variable int a
    cin >> a;
    // two line spaces for style
    cout << endl << endl;
    
    // Prompting user for second input
    cout << "Now, please enter the second exit number: ";
    // store input value in variable int b
    cin >> b;
    // two lines spaces for style
    cout << endl << endl;
    
    // output the correct answer by calling calcGCD using int a and int b
    // as input for the parameters
    cout << " The correct exit is exit number: " << calcGCD(a, b) << 
            ". Good luck, Doctor!" << endl;
    
}// end main method