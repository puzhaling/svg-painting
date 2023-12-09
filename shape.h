
#ifndef SHAPE_H
#define SHAPE_H

#include "libraries.h"

struct Shape {
	double x{};
	double y{};
	std::string_view colour{};

	Shape(double inX, double inY, std::string_view inColour);
	virtual ~Shape();

	virtual std::string draw() const = 0;
};

#endif // SHAPE_H