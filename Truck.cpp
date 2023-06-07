// James Fehr
#include "Truck.h"
#include <iostream>

Truck::Truck(const std::string& make, const std::string& model, int year) : make(make), model(model), year(year){}

Truck::~Truck(){
	std::cout << "The truck has been destroyed\n";
}

std::string Truck::getMake() const
{
	return make;
}

void Truck::setMake(const std::string& make)
{
	this->make = make;
}

std::string Truck::getModel() const
{
	return model;
}

void Truck::setModel(const std::string& model)
{
	this->model = model;
}

int Truck::getYear() const
{
	return year;
}

void Truck::setYear(int year)
{
	this->year = year;
}

void Truck::start() const
{
	std::cout << "The truck has started.\n";
}


void Truck::stop() const
{
	std::cout << "The truck has stopped. \n";
}

void Truck::accelerate()
{
	std::cout << "The truck is accelerating.\n";
}
