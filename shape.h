
#ifndef SHAPE_H
#define SHAPE_H

#include "libraries.h"

class Shape {
public:
	Shape(double x, double y, std::string_view inColour);
	virtual ~Shape();

	virtual std::string draw() const = 0;

	double x{};
	double y{};
	std::string_view colour{};
};

#endif // SHAPE_H