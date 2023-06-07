// James Fehr
#pragma once
#include <string>
class Truck
{
private:	// Definitions of class variables
	std::string make;
	std::string model;
	int year;
public:
	Truck(const std::string& make, const std::string& model, int year);	// Constructor
	~Truck();		// Deconstructor likely will automatically fire off when needed and we don't need to worry about you
	std::string getMake() const;	// Accessor
	void setMake(const std::string& make);		// Mutator
	std::string getModel() const;		// Accessor 
	void setModel(const std::string& model);	// Mutator
	int getYear() const;		// Accessor
	void setYear(int year);		// Mutator
	void start() const;			// function that describe a state of the Truck
	void stop() const;			// function that describe a state of the Truck
	void accelerate();			// function that describe a state of the Truck
};

