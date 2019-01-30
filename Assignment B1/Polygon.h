#include "pch.h"
#include "Functions.h"
#include "Shape.h"

class Polygon : public Shape {
private:

	float * coord;
	std::string type;
	float polyArea;
	int capacity = 10;
	bool isConv;
	int numberOfPoints;
	int numOfSides;
	float centerCoord[2];
	float * extraCoords;
	float * xCoord;
	float  * yCoord;


public:

	~Polygon();

	Polygon();
	void operator=(const Shape &p);
	void operator=(const Polygon &p);
	void operator+(const float *plusCoord);
	void operator+(Shape &s);
	void operator<<(const Shape &s);
	Polygon(float * floatArray, int numberOfPoints);
	float area();
	float circumference() const;
	float *position();
	bool isConvex() const;
	bool isIntersect() const;
	float distance(Shape *s) const;
	std::string getType() const;
	float *  getCoord() const;
	int getNumberOfPoints() const;
	float getLowestX();
	float getLowestY();
	float getHighestX();
	float getHighestY();
	void print();

};