#ifndef SHAPE_H
#define SHAPE_H
#include "Functions.h"


class Shape {
private:
	float topLeft[2];
	float bottomRight[2];
	float * coord;
	int counter;
	

public:

	//Shape(float * a, int c);
	//Shape();
	//virtual ~Shape() = 0;
	virtual void operator=(const Shape &s) = 0;
	
	virtual void operator+(const float[]) = 0;
	virtual void operator+(Shape &s) = 0;
	virtual void operator<<(const Shape &s) = 0;
	virtual float area() = 0;


	virtual std::string getType() = 0;

	virtual float circumference() = 0;



	virtual float *position() = 0;



	virtual bool isConvex() = 0;



	virtual float distance(Shape *s) = 0;
	virtual float getLowestX() = 0;
	virtual float getLowestY() = 0;
	virtual float getHighestX() = 0;
	virtual float getHighestY() = 0;
	virtual float * getCoord() = 0; 
	virtual int getNumberOfPoints() = 0;
	virtual void print() = 0;
	

};


#endif SHAPE_H
