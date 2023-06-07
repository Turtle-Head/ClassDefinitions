// James Fehr
#pragma once
#include <string>


class Car
{
private:
	std::string make;
	std::string model;
	int year;
public:
	Car(const std::string& make, const std::string& model, int year);	// Constructor
	~Car();		// Deconstructor
	std::string getMake() const;	// Accessor
	void setMake(const std::string& make);
	std::string getModel() const;	// Accessor
	void setModel(const std::string& model);
	int getYear() const;	// Accessor
	void setYear(int year);		// Mutator
	void start() const;		// class function describing state of object
	void stop() const;		// class function describing state of object
	void accelerate();		// class function describing state of object
};

