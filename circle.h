
#ifndef CIRCLE_H
#define CIRCLE_H

#include "libraries.h"
#include "shape.h"

struct Circle : Shape  {
	double radius{};

	Circle(double inX, double inY, std::string_view inColour, double inRadius);
	virtual ~Circle();
	virtual std::string draw() const;
};

std::ostream& operator<<(std::ostream& out, const Circle* const c);

#endif // CIRCLE_H