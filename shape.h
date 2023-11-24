#ifndef SHAPE
#define SHAPE

#include "libraries.h"

struct Shape {
	double x{};
	double y{};
	std::string_view colour{};

	Shape(double inX, double inY, std::string_view inColour);
};

#endif // SHAPE