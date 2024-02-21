// pre-processor directives 
#include <iostream>
#include <iomanip>

// create macro values (constants)
#define NUM 34568.8

// use C++ standard library namespace 
using namespace std;

// this funciton uses the comparison operators
// and the if, if-else, and if-else-if statements 
void decisions1(void) {

    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // show decimal point notation and trailing zeros on cout
    cout << fixed << showpoint;
    // show three digits to the right of the decimal on cout
    cout << setprecision(3);

    // use an if statement
    if (num < 40000.0) {
        // printf("%.1f is less than 40000.0\n", num); // displayed
        // cin >> num;
        cout << num << " is less than 40000.0" << endl;
    }

    // change value in variable
    num += num;

    // use an if-else statement
    if (num < 40000.0) {
        // printf("%.1f is less than 40000.0\n", num); // not displayed
        cout << num << " is less than 40000.0" << endl;
    } else {
        // printf("%.1f is not less than 40000.0\n", num); // displayed
        cout << num << " is not less than 40000.0" << endl;
    }

    // change value in variable
    num = 0;

    // use an if-else-if statement
    if (num == 0.0) {
        // printf("%.1f is equal to 0.0\n", num); // displyed
        cout << num << " is equal to 0.0" << endl;
    } else if (num < 0.0) {
        // printf("%.1f less than 0.0\n", num); // not displayed
        cout << num << " is less than 0.0" << endl;
    } else {
        // printf("%.1f greater than 0.0\n", num); // not displayed
        cout << num << " is greater than 0.0" << endl;
    }

}