// James Fehr
#include "Plane.h"
#include <iostream>

Plane::Plane(const std::string& make, const std::string& model, int year) : make(make), model(model), year(year) {}

Plane::~Plane(){
	std::cout << "\nThe Plane has been destroyed.\nBlack Box indicates the pilot shoundn't have landed\n";
}

std::string Plane::getMake() const
{
	return make;
}

void Plane::setMake(const std::string& make)
{
	this->make = make;
}

std::string Plane::getModel() const
{
	return model;
}

void Plane::setModel(const std::string& model)
{
	this->model = model;
}

int Plane::getYear() const
{
	return year;
}

void Plane::setYear(int year)
{
	this->year = year;
}

void Plane::start() const
{
	std::cout << "\nThe plane has started\n";
}

void Plane::takeOff() const
{
	std::cout << "\nThe plane has left the ground\nPlease fasten your seat belt\n";
}

void Plane::land() const
{
	std::cout << "\nThe captain has turned on the seatbelt lights\nThe plane is landing\n";
}

void Plane::stop() const
{
	std::cout << "\nThe plane has come to a stop\nGrab anyof your carryon as you deboard the plane\n";
}

void Plane::accelerate()
{
	std::cout << "\nThe plane is gaining speed\n";
}


