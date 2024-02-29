// pre-processor directives
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <math.h>

#include "Geometry.h"

#define PI 3.141592653689793238

// use C++ standard library namespace
using namespace std;

// declare Circle class and specify that its a subclass of geometry
class Circle : Geometry
{
    private: 
        // declare fields
        int radius;
        double area;
    public:
        // declare constructors
        Circle();
        Circle(int);
        // declare setter and getter for radius field
        void setRadius(int);
        // the keyword const at the end of the method
        // declares that the method wont change any of the 
        // field values
        // attempting to do so will result in a compile error
        // the ampersand operator is getting the address in 
        // memory of its argument
        void getRadius(int&) const;
        // declare a getter for area field
        void getArea(double&) const;
        void compute() override;
        // declare toString method
        void printCircle() const;
        //declare equals method
        bool equalCircle(const Circle&) const;
};

// class constructors and methods may be defined outside of the class
// in which they're declared
// but, when they are, their names must be prefixed with the name of
// the class and the resolution operator ::
Circle::Circle()
{
    // initialize radius to zero
    radius = 0;
}

Circle::Circle(int radius)
{
    // check if we've been given an invalid radius - less
    // than zero
    if (radius < 0) {
        // throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }

    // initialize radius to specified radius
    this->radius = radius;
}

void Circle::setRadius(int radius)
{
    // check if we've been given an invalid radius - less
    // than zero
    if (radius < 0) {
        // throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }

    // changing radius to specified radius
    this->radius = radius;
}

void Circle::getRadius(int& radius) const
{
    // this->radius = 0;
    // this->area = 0.0;
    // place radius field in specified radius
    radius = this->radius;
}

void Circle::getArea(double& area) const
{
    //place radius field value in specified area
    area = this->area;
}

void Circle::compute()
{
    area = PI * pow(radius, 2);
}

void Circle::printCircle() const
{
    cout << fixed << showpoint;
    cout << setprecision(5);
    cout << "radius=" << radius << ", area=" << area << endl;
}

bool Circle::equalCircle(const Circle& otherCircle) const
{
    return(radius == otherCircle.radius &&
    area == otherCircle.area);
}