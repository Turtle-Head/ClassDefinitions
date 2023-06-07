// James Fehr
#include "Car.h"
#include <iostream>
// constructor
Car::Car(const std::string& make, const std::string& model, int year):make(make), model(model), year(year) {}
// deconstructor
Car::~Car(){
	std::cout << "\nThe car haas been destroyed.\n\n";
}
// class function to get value of object
std::string Car::getMake() const
{
	return make;
}
// class function to set value of object
void Car::setMake(const std::string& make)
{
	this->make = make;
}
// class function to get value of object
std::string Car::getModel() const
{
	return model;
}
// class function to set value of object
void Car::setModel(const std::string& model)
{
	this->model = model;
}
// class function to get value of object
int Car::getYear() const
{
	return year;
}
// class function to set value of object
void Car::setYear(int year)
{
	this->year = year;
}
// class function describing state of object
void Car::start() const
{
	std::cout << "The car is starting.\n";
}
// class function describing state of object
void Car::stop() const
{
	std::cout << "The car is stopping\n";
}
// class function describing state of object
void Car::accelerate()
{
	std::cout << "The car is accelerating.\n";
}
