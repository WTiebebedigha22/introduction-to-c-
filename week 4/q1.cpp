//#include "stdafx.h" // Header File used VS.
#include <iostream>
//#include <iomanip> // Used to format the output.
#include <cstdlib> // used for system().
#include <math.h> // Used for sqrt()
#include <stdio.h> /* printf, NULL */
#include <time.h> /* time */
using namespace std;// ?
#include <string> // used to work with strings.

string print_title (string title); // Funtion declaration

int main (){

    string title; // Stores user input

    cout << "Enter a Title: ";
    cin >> title;

    print_title(title); // calls funtion.

    system("PAUSE"); // Pauses the program before temrintaion.
    return 0;
}

string print_title (string title){  // Function definition
    cout << title << endl
    int length title.length():
    for (int i=0; i<=length-1; i++){
        cout << "="; // endl & \n forces the output to go to a new line
    }
}