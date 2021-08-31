#include <iostream>

using namespace std;

int main() {

    // Declare variables
    int cel = 40;
    int fah = ((9.0/5.0)*(cel)) + 32;

    // Loop to find when the two ints are equal
    while (fah != cel){
       cel--;
       fah = ((9.0/5.0)*(cel)) + 32;
    }

    cout << "The temperature where the value in Celsius and Fahrenheit is the same is " << fah << " degrees.";

    return 0;

}