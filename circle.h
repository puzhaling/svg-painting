#ifndef CIRCLE
#define CIRCLE

#include "libraries.h"
#include "shape.h"

struct Circle : Shape {
	double radius{};

	Circle(double inX, double inY, std::string_view inColour, double inRadius);
};

#endif // CIRCLE