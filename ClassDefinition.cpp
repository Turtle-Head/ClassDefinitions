// ClassDefinition.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Fehr

#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Plane.h"


int main()
{
   Car car("Honda","CRX",1987);    // Constructor

    std::cout << "Make: " << car.getMake() << "\n"; // Accessor
    std::cout << "Model: " << car.getModel() << "\n";   //Accessor
    std::cout << "Year: " << car.getYear() << "\n\n";   // Accessor

    car.start();        // class functin call
    car.accelerate();   // class functin call
    car.stop();         // class functin call

    Truck BigRed("Dodge", "Durango", 2021);     // Constructor
    
    std::cout << "\nMake: " << BigRed.getMake() << "\n";    // Accessor
    std::cout << "Model: " << BigRed.getModel() << "\n";    // Accessor
    std::cout << "Year: " << BigRed.getYear() << "\n";      // Accessor

    BigRed.start();                                         // class functin call
    BigRed.accelerate();                                // class functin call
    BigRed.stop();                                      // class functin call

    Plane plane("Mayweather", "Cesna", 2050);           // Constructor

    std::cout << "\nMake: " << plane.getMake() << "\n";     // Accessor
    std::cout << "Model: " << plane.getModel() << "\n";     // Accessor
    std::cout << "Year: " << plane.getYear() << "\n";       // Accessor
    plane.start();                                      // class functin call
    plane.accelerate();                                 // class functin call
    plane.takeOff();                                    // class functin call
    plane.land();                                       // class functin call
    plane.stop();                                       // class functin call

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
