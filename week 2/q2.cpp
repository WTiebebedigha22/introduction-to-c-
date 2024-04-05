//#include "stdafx.h"
#include <iostream>
//#include <string> //Required for string type.

using namespace std;

int main()
{

    float celsius;
    float farenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    //Conversion

    farenheit = (5.0/9) * (celsius + 32);
    cout << "Temperature in Farenheit is: " << farenheit << endl;

    //system("pause");

    return 0;
}
