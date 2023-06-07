// James Fehr
#pragma once
#include <string>
class Plane
{
private:
	std::string make;
	std::string model;
	int year;
public:
	Plane(const std::string& make, const std::string& model, int year);		// constructor
	~Plane();				// deconstructor will be used automatically
	std::string getMake() const;		// function getting property of object
	void setMake(const std::string& make);	// function setting property of object
	std::string getModel() const;			// function getting property of object
	void setModel(const std::string& model);	// function setting a property of object
	int getYear() const;		// function returning year
	void setYear(int year);		// function setting the year
	void start() const;			// class function describing the state of the object
	void takeOff() const;		// class function describing the state of the object
	void land() const;			// class function describing the state of the object
	void stop() const;			// class function describing the state of the object
	void accelerate();			// class function describing the state of the object

};