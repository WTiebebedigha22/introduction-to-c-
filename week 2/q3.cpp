#include <iostream>
using namespace std;
#include <string> //Required for strings

int main(){

    /* Variables to store the data. */
    float degrees;
    float radians;
    float arc_length;
    const double radius = 5.0;
    const double PI = 3.14159;

    cout << "Enter the angle in degrees: ";
    cin >> degrees;

    radians = degrees * PI / 180; //Converts degrees to radians.
    arc_length = radius * radians; //Calclates arc length.

    cout << "The arc lenght is " << arc_length <<endl;

    //system("pause")
    return 0;
}